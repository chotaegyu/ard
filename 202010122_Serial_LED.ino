int a = 3;//int - 정수(1,0,-1)
float b = 2.5; // float= 실수(소수-2.5)
char c = 'e';// char - 문자열



void setup() {
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  if(Serial.available()>0){
    char c = Serial.read();
    if(c == 'd'){
      digitalWrite(9,HIGH);
    }
    if(c == 'f'){
      digitalWrite(9,LOW);{
      }
    }
  

}
}
