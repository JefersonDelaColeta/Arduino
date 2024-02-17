int ledPin=6;
int delayPeriod=10;

void setup() {
  // put your setup code here, to run once:
pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(ledPin,HIGH);
delay(delayPeriod);
digitalWrite(ledPin, LOW);
delay(delayPeriod);
delayPeriod += 5;

if (delayPeriod == 150){
    while(delayPeriod > 10){
        delayPeriod -=5;
digitalWrite(ledPin,HIGH);
delay(delayPeriod);
digitalWrite(ledPin, LOW);
delay(delayPeriod);
     }
  }
}
