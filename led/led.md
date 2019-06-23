# LED SOCKET KIT  v1.5

## STEPS
* connect the led onto the led socket
* connect one side of the grove cable into the led socket
* connect the other side of the grove cable into d4 of the grove shield
* adjust the orange cap in led socket to achieve the desired brightness
* run the code given below
* open serial monitor (ctrl + shift + m) to view the output

## CODE
```
//Single Press action

const int ledPin   = 4; //since button is connected to d4
      int Delay    = 500; //adjust this value to change blinking frequency

void setup() 
{
  //initializing led as output
  pinMode(ledPin, OUTPUT);

  //initializing the serial monitor
  Serial.begin(9600);
}

void loop() 
{ 
 //turn on led
 digitalWrite(ledPin,HIGH);
 Serial.println("LED IS ON");
 delay(Delay);
 
 //turn off led
 digitalWrite(ledPin,LOW);
 Serial.println("LED IS OFF");
  delay(Delay);
  
}
 ```
