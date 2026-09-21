#include<Keypad.h>
char keys[4][4] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

byte rowPins[4] = {9, 8, 7, 6};
byte colPins[4] = {5, 4, 3, 2};

Keypad myKeypad = Keypad(makeKeymap(keys), rowPins, colPins, 4, 4);
void setup()
{
  for(byte i = 2; i < 10; i++){
  	pinMode(i, INPUT);
  }
  Serial.begin(9600);
  
}

void loop()
{
  char x;
  x = myKeypad.waitForKey();
  Serial.print(x);
}