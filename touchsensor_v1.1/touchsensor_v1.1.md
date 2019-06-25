# TOUCH SENSOR v1.1

## STEPS
* connect one side of the grove cable into the touchsensor
* connect the other side of the grove cable into D6 of the grove shield
* run the code given below
* open serial monitor (ctrl + shift + m) to view the output
## CODE
The Serial Monitor prints TOUCH DETECTED when touch is detected
Otherwise it NO TOUCH DETECTED

```
//TOUCH SENSOR v1.1

//Connect touch Sensor to port d6 of the grove shield

const byte touchSensor = 6;

void setup()
{
//sets touchSensor as input
pinMode(touchSensor,INPUT);

//initializes serial monitor
Serial.begin(9600);
}

void loop()
{
//read value from touch sensor
int touchVal = digitalRead(touchSensor);

if(touchVal == HIGH)
    Serial.println("TOUCH DETECTED");
else
    Serial.println("NO TOUCH DETECTED");

delay(100);
}
```
