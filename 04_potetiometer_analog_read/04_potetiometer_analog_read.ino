const int POT = 0;
int valPot = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  valPot = analogRead(POT);

  Serial.println(valPot);
  delay(500);
}
