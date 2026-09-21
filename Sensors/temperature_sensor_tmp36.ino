#define tmp36 A0

int pinValue = 0;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //Scale Factor: 10 mv for 1 degree
  // 25 degrees = 250mv = 0.25v
  // 0.75 - 0.25 = 0.5v
  pinValue = analogRead(tmp36);
  float Vout = pinValue*(5.0/1023.0);
  Vout = Vout - 0.5;
  
  float temperature = Vout*100;
  
  Serial.print("Vout value is: ");
  Serial.print(Vout);
  Serial.println(" v");
  
  Serial.print("Temperature is: ");
  Serial.print(temperature);
  Serial.println(" degrees");
  
  delay(1000);
}