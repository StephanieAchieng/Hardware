  //defines pins numbers
  
  int Red=13;
  int Green=12;
  int Amber=11;
  int RedBlink=10;
  int GreenBlink=5;
  int AmberBlink=7;
  int RedDelay=500;
  int GreenDelay=500;
  int AmberDelay=500;

  void setup(){
    pinMode(Red, OUTPUT);
    pinMode(Green, OUTPUT);
    pinMode(Amber,OUTPUT);
  }
void loop(){
  for(int j=1;j<= RedBlink;j++)
  {
    digitalWrite(Red,HIGH);
   delay(RedDelay);
    digitalWrite(Red,LOW);
   delay(RedDelay);
  }    
   for(int j=1;j<=GreenBlink;j++)
    {
    digitalWrite(Green,HIGH);
     delay(GreenDelay);
    digitalWrite(Green,LOW);
      delay(GreenDelay);
      }
   for( int j=1;j<=AmberBlink;j++)
   { 
    digitalWrite(Amber,HIGH);
     delay(AmberDelay);
    digitalWrite(Amber,LOW);
      delay(AmberDelay);
      }
}

  
