const int LED = LED_BUILTIN;
const int BUTTON = 2;

int curButton = LOW;
int prevButton = LOW;

boolean ledOn = false;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
  Serial.begin(9600);
}

void loop() {
  curButton = digitalRead(BUTTON);

  if (curButton == HIGH && prevButton == LOW) {
    ledOn = !ledOn;
    digitalWrite(LED, ledOn);
  }

  prevButton = curButton;
}
