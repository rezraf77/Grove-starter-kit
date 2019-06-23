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
 
