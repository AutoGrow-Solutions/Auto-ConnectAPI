#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include <ESP8266HTTPClient.h>

// Store credentials in PROGMEM to save RAM
const char ssid[] PROGMEM = "Room Wifi";
const char password[] PROGMEM = "Leighche28";

ESP8266WebServer server(80);  // Server on port 80

const int ledPin = 5; // Define the pin for the LED (GPIO5 corresponds to D1 on many ESP8266 boards)
const String apiKey = "WBNWN31SCJA29ANB"; // Your ThingSpeak API Key

void setup() {
  Serial.begin(115200);
  
  // Initialize LED pin
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW); // Ensure LED is off initially

  // Load credentials from PROGMEM
  char ssid_buf[32]; // Allocate a buffer large enough for the SSID
  char password_buf[32]; // Allocate a buffer large enough for the password
  strcpy_P(ssid_buf, ssid);
  strcpy_P(password_buf, password);
  
  WiFi.begin(ssid_buf, password_buf);

  // Connect to Wi-Fi
  Serial.print("Connecting to WiFi");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("\nConnected to Wi-Fi");
  Serial.print("IP Address: ");
  Serial.println(WiFi.localIP());

  // Define routes
  server.on("/led/on", []() {
    digitalWrite(ledPin, HIGH); // Turn LED on
    sendToThingSpeak("1"); // Send status to ThingSpeak
    server.send(200, "text/plain", "LED is ON");
  });

  server.on("/led/off", []() {
    digitalWrite(ledPin, LOW); // Turn LED off
    sendToThingSpeak("0"); // Send status to ThingSpeak
    server.send(200, "text/plain", "LED is OFF");
  });

  server.begin();  // Start the server
  Serial.println("Server started");
}

void loop() {
  server.handleClient();  // Handle incoming client requests
}

void sendToThingSpeak(const String& value) {
  if (WiFi.status() == WL_CONNECTED) {
    HTTPClient http;
    WiFiClient client;
    String url = "http://api.thingspeak.com/update?api_key=" + apiKey + "&field1=" + value;
    http.begin(client, url);
    int httpCode = http.GET(); // Make the request

    if (httpCode > 0) {
      String payload = http.getString();
      Serial.println("ThingSpeak response: " + payload);
    } else {
      Serial.println("Error on HTTP request");
    }
    http.end();
  } else {
    Serial.println("Not connected to WiFi");
  }
}
