# BUZZER  v1.2

## STEPS
* connect one side of the grove cable into the buzzer
* connect the other side of the grove cable into d4 of the grove shield
* run the code given below

## CODE
```
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
```
## References
[https://programmingelectronics.com/an-easy-way-to-make-noise-with-arduino-using-tone/](https://programmingelectronics.com/an-easy-way-to-make-noise-with-arduino-using-tone/)
[https://www.instructables.com/id/How-to-use-a-Buzzer-Arduino-Tutorial/](https://www.instructables.com/id/How-to-use-a-Buzzer-Arduino-Tutorial/)
[http://www.linuxcircle.com/2013/03/31/playing-mario-bros-tune-with-arduino-and-piezo-buzzer/](http://www.linuxcircle.com/2013/03/31/playing-mario-bros-tune-with-arduino-and-piezo-buzzer/)