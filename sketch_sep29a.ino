int wait=2000;

void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13,HIGH);
  delay(wait);
  digitalWrite(13,LOW);
  delay(wait);
  if(wait>100){
    wait=wait-100;
  } 
  
}
