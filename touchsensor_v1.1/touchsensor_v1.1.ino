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