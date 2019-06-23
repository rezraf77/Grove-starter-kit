// sketch to use Buzzer v1.2

const int buzzerPin = 4;

void setup() 
{
pinMode(buzzerPin,OUTPUT); // setting buzzer as output
}

void loop() 
{
  //(pin no, freq , duration)
  tone(buzzerPin, 1000, 250);
  delay(1000); 

  //delay and timer are independent
  
  
}
