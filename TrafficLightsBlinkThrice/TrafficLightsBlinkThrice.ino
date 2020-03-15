int Red = 13;
int Amber=12;

void setup(){
  pinMode (Red, OUTPUT);
  pinMode (Amber, OUTPUT);
  
}
void loop(){
  digitalWrite(Red, HIGH);
  delay(1000);
  digitalWrite(Red, LOW);
  delay(1000);
  
  digitalWrite(Amber, HIGH);
  delay(1000);
  digitalWrite(Amber, LOW);
  delay(1000);
  
  }
