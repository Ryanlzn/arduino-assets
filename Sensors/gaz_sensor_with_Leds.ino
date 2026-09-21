int green = 13;
int red = 8;
float gaz;
void setup()
{
  pinMode(A0 , INPUT);
  pinMode(green, OUTPUT);
  pinMode(red, OUTPUT);
  
  Serial.begin(9600);
}

void loop()
{
  gaz = analogRead(A0);
  Serial.println(gaz);
  if(gaz < 500){
   digitalWrite(green, HIGH);
   digitalWrite(red , LOW);
  }else if(gaz > 500){
   digitalWrite(green, LOW);
   digitalWrite(red , HIGH);
  }
   
  delay(10);
  
}