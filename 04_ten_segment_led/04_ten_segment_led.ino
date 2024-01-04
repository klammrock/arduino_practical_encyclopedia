const int POT = 0;
int valPot = 0;

const int pinsled[10] = {3,4,5,6,7,8,9,10,11,12};
int countleds = 0;

void setup() {
  Serial.begin(9600);

  for(int i=0;i<10;i++) {
    pinMode(pinsled[i],OUTPUT);
    digitalWrite(pinsled[i],LOW);
  }
}

void loop() {
  valPot = analogRead(POT);

  Serial.println(valPot);

  // scale 0..10
  countleds = map(valPot,0,1023,0,10);

  for(int i=0; i<10; i++)
  {
    if(i<countleds)
      digitalWrite(pinsled[i],HIGH);
    else
      digitalWrite(pinsled[i],LOW);
  }
  
  delay(500);
}
