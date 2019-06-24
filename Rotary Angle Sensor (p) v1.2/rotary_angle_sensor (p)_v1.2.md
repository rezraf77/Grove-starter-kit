# Rotary Angle Sensor(P) v1.2

## STEPS
* connect one side of the grove cable into the rotary angle sensor
* connect the other side of the grove cable into A0 of the grove shield
* run the code given below
* open serial monitor (ctrl + shift + m) to view the output
## CODE
Here the sensor gives an out put ranging from 0 to a max value of 300 ,
it also outputs LOW, MIDDLE or HIGH depending on the value of the sensor

LOW    -> 0   - 99
MIDDLE -> 100  - 199
HIGH   -> 200 - 300
```

#define ROTARY_ANGLE_SENSOR A0
#define ADC_REF 5//reference voltage of ADC is 5v.If the Vcc switch on the seeeduino
         //board switches to 3V3, the ADC_REF should be 3.3
#define GROVE_VCC 5//VCC of the grove interface is normally 5v
#define FULL_ANGLE 300//full value of the rotary angle is 300 degrees

int getDegree();

void setup() 
{
  Serial.begin(9600);
    pinMode(ROTARY_ANGLE_SENSOR, INPUT);

}

void loop() 
{
  int degrees;
  degrees = getDegree();
  Serial.print("value  =  ");
  Serial.print(degrees);
  if(( degrees >= 0) && (degrees < 100))
    {
      Serial.println("Range : LOW ");
    }
  else if(( degrees >= 100) && (degrees < 200))  
    {
      Serial.println("Range : MIDDLE ");
    }  
  else
    {
       Serial.println("Range : HIGH ");
    }   
    
  delay(500); //adjust this for latency control
}

int getDegree()
{
  int sensor_value = analogRead(ROTARY_ANGLE_SENSOR);
  float voltage;
  voltage = (float)sensor_value*ADC_REF/1023;
  float degrees = (voltage*FULL_ANGLE)/GROVE_VCC;
  return degrees;
}
```
## REFERENCES
[https://github.com/Seeed-Studio/Rotary_Angle_Sensor](https://github.com/Seeed-Studio/Rotary_Angle_Sensor)
[http://wiki.seeedstudio.com/Grove-Rotary_Angle_Sensor/](http://wiki.seeedstudio.com/Grove-Rotary_Angle_Sensor/)