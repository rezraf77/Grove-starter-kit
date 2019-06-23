# BUTTON v1.1

## STEPS
* connect one side of the grove cable into the button
* connect the other side of the grove cable into d4 of the grove shield
* run the code given below
* open serial monitor (ctrl + shift + m) to view the output
## CODE

### Single Press Action
In single Press Action , when you press the switch serial monitor shows "BUTTON PRESSED" 
and when the button is released it shows "BUTTON RELEASED"
```
//Single Press action

const int buttonPin   = 4; //since button is connected to d4
      int buttonState = 0; //initializing state to zero


void setup() 
{
  //initializing button as input
  pinMode(buttonPin, INPUT);

  //initializing the serial monitor
  Serial.begin(9600);
}

void loop() 
{
 //read input from button
 buttonState = digitalRead(buttonPin);

 if(buttonState == HIGH)
  {
  Serial.println("BUTTON IS PRESSED");  
  }

 else
  {
  Serial.println("BUTTON IS RELEASED");
  }
  
}
 

```
## REFERENCES
[debouncing button](https://programmingelectronics.com/tutorial-19-debouncing-a-button-with-arduino-old-version/)