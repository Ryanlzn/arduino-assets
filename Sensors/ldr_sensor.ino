int led = 2;
int ldr = A0;
//c'est une valeur donne pour le capteur
int sensorValue = 0;
void setup()
{
 pinMode(led , OUTPUT);
 pinMode(ldr , INPUT);
 Serial.begin(9600);
}

void loop()
{
  sensorValue = analogRead(ldr);
  Serial.println(sensorValue);
  if(sensorValue < 210){
  digitalWrite(led , HIGH);
  } else {
  digitalWrite(led , LOW);
  }
    
}