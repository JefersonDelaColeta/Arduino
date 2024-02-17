unsigned long time;
void setup() {
  Serial.begin (9600);

}

void loop() {

  Serial.print("time: ");
  time = millis();
  //exibe o tempo desde que o programa foi inicializado

  Serial.print(time);
  delay(1000); // aguarda o segundo
}
