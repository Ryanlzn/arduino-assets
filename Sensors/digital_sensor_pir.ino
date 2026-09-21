#define PIRpin 8
#define greenLed 4
#define redLed 5
bool mvt = false; // boolean
// booleans has always true = 1, false = 0
// binary: 0 or 1, True or false
void setup()
{
  pinMode(PIRpin, INPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(redLed, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  mvt = digitalRead(PIRpin);
  Serial.println(mvt);
  
  if(mvt == true){
  	digitalWrite(greenLed, LOW);
    digitalWrite(redLed, HIGH);
  } else{
    digitalWrite(redLed, LOW);
    digitalWrite(greenLed, HIGH);
  }
  
  
  delay(50);
}