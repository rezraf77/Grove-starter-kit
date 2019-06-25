//LIGHT SENSOR v1.2

//Connect Light Sensor to port A0 of the grove shield

const byte lightSensor = A0;

void setup()
{
//sets lightSensor as input
pinMode(lightSensor,INPUT);

//initializes serial monitor
Serial.begin(9600);
}

void loop()
{
//read value from light sensor
int lightVal = analogRead(lightSensor);

//Print the value to serial monitor
Serial.println(lightVal);
}