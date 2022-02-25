int a = 0;
float b = 1.2;
char ab = 'c';

void setup() {
  pinMode(6,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  a = analogRead(A0);
  Serial.println (a);

   
}
