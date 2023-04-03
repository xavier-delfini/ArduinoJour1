void setup(){
  int i=0;
  while(i<8){
   pinMode(i,OUTPUT);
   i++;
  }
}


void loop() {
  // put your main code here, to run repeatedly:
  int i=0;
  int j=7;
  while(i<8){
    digitalWrite(j,LOW);
    digitalWrite(i,HIGH);
    j=i;
    i++;
    delay(500);
    
  }
}