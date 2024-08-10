void setup() {
    Serial.begin(9600);  // Start serial communication at 9600 baud rate
}

void loop() {
    if (Serial.available() > 0) {
        char command = Serial.read();  // Read the incoming byte
        if (command == '1') {
            // Do something when command '1' is received
            digitalWrite(LED_BUILTIN, HIGH);  // Example: Turn on the built-in LED
        } else if (command == '0') {
            // Do something when command '0' is received
            digitalWrite(LED_BUILTIN, LOW);  // Example: Turn off the built-in LED
        }
    }
}
