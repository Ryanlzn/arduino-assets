#define gasPin A0
int gasValue = 0;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  gasValue = analogRead(gasPin);
  Serial.print("Gas value is: ");
  Serial.println(gasValue);
  
  delay(10);
}