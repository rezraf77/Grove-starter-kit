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

### Debouncing
In Debouncing when the button is pressed once it outputs "BUTTON IS TOGGLED ON"
it stays in that stays until the button is pressed again, then it outputs "BUTTON IS TOGGLED OFF"

```
//BUTTON TOGGLIING - Once pressed the button will stay on until the button is pressed again and will stay off until the button is pressed yet again


//initialize and declare variables

const int buttonPin = 4; //push connected to d4


int buttonState = LOW; //this variable tracks the state of the button, low if not pressed, high if pressed
int flag = 0; //0 if off, 1 if on

long lastDebounceTime = 0;  // the last time the output pin was toggled
long debounceDelay = 150;    // the debounce time; increase if the output flickers


void setup() 
{
  //set the mode of the pins...
  pinMode(buttonPin, INPUT);
  //initialize serial monitor
  Serial.begin(9600);
}


void loop() 
{
  //sample the state of the button - is it pressed or not?
  buttonState = digitalRead(buttonPin);

  //filter out any noise by setting a time buffer
  if ( (millis() - lastDebounceTime) > debounceDelay) 
  {
    
    //if the button has been pressed, lets toggle state from "off to on" or "on to off"
    if ( (buttonState == HIGH) && (flag == 1) ) 
    {
      Serial.println("BUTTON TOGGLED ON "); //On state
      flag = 0; //change the state
      lastDebounceTime = millis(); //set the current time
    }
    
    else if ( (buttonState == HIGH) && (flag == 0) ) 
    {
      Serial.println("BUTTON TOGGLED OFF "); //On state
      flag = 1; //change the state
      lastDebounceTime = millis(); //set the current time
    }

  }

}
```
## REFERENCES
[https://programmingelectronics.com/tutorial-19-debouncing-a-button-with-arduino-old-version/](https://programmingelectronics.com/tutorial-19-debouncing-a-button-with-arduino-old-version/)