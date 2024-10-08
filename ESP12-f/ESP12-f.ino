#include <ESP8266WiFi.h>

// WiFi credentials
const char* ssid = "Room Wifi";
const char* password = "Leighche28";

WiFiServer server(80); // Create a web server on port 80

void setup() {
  // Start serial communication with Arduino Mega
  Serial.begin(9600);

  // Connect to WiFi
  WiFi.begin(ssid, password);
  Serial.println("Connecting to WiFi...");
  
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting...");
  }
  
  Serial.println("Connected to WiFi");
  Serial.print("ESP8266 IP Address: ");
  Serial.println(WiFi.localIP());

  // Start the web server
  server.begin();
}

void loop() {
  // Check if a client has connected
  WiFiClient client = server.available();

  if (!client) {
    return;
  }

  // Wait for the client to send data
  while (!client.available()) {
    delay(1);
  }

  // Read the request from the client
  String request = client.readStringUntil('\r');
  Serial.println(request); // Debug print the request
  client.flush();

  // Control the LED by sending a command to Arduino Mega
  if (request.indexOf("/led=on") != -1) {
    Serial.write('1');  // Send '1' to turn on LED
  }
  if (request.indexOf("/led=off") != -1) {
    Serial.write('0');  // Send '0' to turn off LED
  }

  // Send response to the client
  client.println("HTTP/1.1 200 OK");
  client.println("Content-Type: text/html");
  client.println();
  client.println("<!DOCTYPE HTML>");
  client.println("<html>");
  client.println("<h1>ESP8266 Web Server</h1>");
  client.println("<p><a href=\"/led=on\">Turn On LED</a></p>");
  client.println("<p><a href=\"/led=off\">Turn Off LED</a></p>");
  client.println("</html>");

  // Close the client connection
  client.stop();
}
