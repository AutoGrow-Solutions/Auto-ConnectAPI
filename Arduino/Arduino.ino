void setup() {
  Serial1.begin(9600);  // Communication with NodeMCU on Serial1
  pinMode(7, OUTPUT);   // Set pin 7 as output (for LED)
}

void loop() {
  if (Serial1.available()) {
    char command = Serial1.read();  // Read the command from NodeMCU

    if (command == '1') {
      digitalWrite(7, HIGH);  // Turn LED ON
    } 
    else if (command == '0') {
      digitalWrite(7, LOW);   // Turn LED OFF
    }
  }
}
