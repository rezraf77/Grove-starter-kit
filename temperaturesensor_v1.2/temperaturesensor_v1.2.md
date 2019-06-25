# TEMPERATURE SENSOR v1.2

## STEPS
* connect one side of the grove cable into the temperaturesensor
* connect the other side of the grove cable into A0 of the grove shield
* run the code given below
* open serial monitor (ctrl + shift + m) to view the output
## CODE
The Serial Monitor prints the temperature in degree celsius

```
//TEMPERATURE SENSOR v1.2

//Connect Temperature Sensor to port A0 of the grove shield

#include<math.h>

const byte tempSensor = A0;

void setup()
{
//sets tempSensor as input
pinMode(tempSensor,INPUT);

//initializes serial monitor
Serial.begin(9600);
}

void loop()
{

//Print the value to serial monitor
float temp = getTemp();
Serial.print(temp);
Serial.println(" C");

}

float getTemp()
    {
    //read value from Temperature sensor
    int sensorVal = analogRead(tempSensor);

    float resistance=(float)(1023-sensorVal)*10000/sensorVal; //get the resistance of the sensor;
    float temperature=1/(log(resistance/10000)/3975+1/298.15)-273.15;//convert to temperature v

    return temperature;   
    }
    
```
