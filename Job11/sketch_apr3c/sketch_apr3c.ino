int pressed=0;
bool light=0;
void setup()
{
  //Serial.begin(9600);
  pinMode(4, OUTPUT);
  pinMode(2, INPUT_PULLUP);
}
void loop()
{
  int buttonState = digitalRead(2);
  if (buttonState == 0){
    delay(500);
    if (buttonState==0){
      digitalWrite(4,LOW);
          }
    else{
      pressed++;
      if (pressed>1){
        pressed=0;
      }
    }
  }
  
  if (pressed==1){
    digitalWrite(4, HIGH);
    delay(500);
    digitalWrite(4,LOW);
        
  }
  else{
    digitalWrite(4, HIGH);    
  }
  Serial.println(buttonState);
  delay(100);
}
