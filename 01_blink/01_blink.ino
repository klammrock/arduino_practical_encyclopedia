//const int LED = 10;
// LED_BUILTIN == 13
const int LED = LED_BUILTIN;

void setup() {
  Serial.begin(9600);
  // Serial.println(LED_BUILTIN);

  pinMode(LED, OUTPUT);
}


void loop() {
  digitalWrite(LED, HIGH);
  Serial.println("High");
  delay(1000);

  digitalWrite(LED, LOW);
  Serial.println("Low");
  delay(1000);
}
