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

boolean debounce(boolean last) {
  boolean current = digitalRead(BUTTON);

  if (last != current) {
    delay(5);
    current = digitalRead(BUTTON);
    return current;
  }
}

void loop() {
  curButton = debounce(prevButton);

  if (curButton == HIGH && prevButton == LOW) {
    ledOn = !ledOn;
    digitalWrite(LED, ledOn);
  }

  prevButton = curButton;
}
