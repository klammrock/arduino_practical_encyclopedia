const int LED = LED_BUILTIN;
const int BUTTON = 2;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(BUTTON) == LOW) {
    digitalWrite(LED, LOW);
    Serial.println("Off");
  } else {
    digitalWrite(LED, HIGH);
    Serial.println("On");
  }

  delay(500);
}
