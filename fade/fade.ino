int led = 3 ;
void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for(int j = 0 ; j<255 ;j+=5){
  analogWrite(led,j);
  delay(50);
  }
  
  for(int j = 255 ; j>=0 ;j-=5){
    analogWrite(led,j);
  delay(50);
  }
  
}
