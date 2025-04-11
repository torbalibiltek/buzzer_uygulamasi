int buzzer=2;
int button=3;
int analog;
void setup()
{
  pinMode(buzzer, OUTPUT);
  pinMode(button,INPUT);
}

void loop()
{
 analog=analogRead(A0);
  if(digitalRead(3)==0){
  	tone(buzzer,analog);
  
  }else{
  	noTone(buzzer);
  }
  
  
}