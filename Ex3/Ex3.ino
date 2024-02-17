void setup(){

  //Está linha de código determina o que o led 13 é capaz de fazer(como piscar...)
  //podemos determinar o tempo do led.

  pinMode(8,OUTPUT);
  pinMode(10,OUTPUT);
}

void loop() {
  //digitalWrite indentifica quando o led vai se acender
  //delay é o tempo seja ele para ligar ou se apagar. 

int x = 0;

for(x=0; x<5; x++){
  digitalWrite(8,HIGH);
  delay(30);
  digitalWrite(8,LOW);
  delay(30);
  x++;
}
for(x=5; x>0; x--){
  digitalWrite(10,HIGH);
  delay(30);
  digitalWrite(10,LOW);
  delay(30);
}
}
