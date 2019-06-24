# SOUND SENSOR v1.6

## STEPS
* connect one side of the grove cable into the soundsensor
* connect the other side of the grove cable into d4 of the grove shield
* run the code given below
* open serial monitor (ctrl + shift + m) to view the output
## CODE
The Serial Monitor prints LOUD,LOUD when sound is detected
Otherwise it Prints Quiet

```

int soundDetectedPin = A0; // Use Pin 10 as our Input
int soundDetectedVal = HIGH; // This is where we record our Sound Measurement
boolean bAlarm = false;

unsigned long lastSoundDetectTime; // Record the time that we measured a sound


int soundAlarmTime = 500; // Number of milli seconds to keep the sound alarm high


void setup ()
{
  Serial.begin(9600);  
  pinMode (soundDetectedPin, INPUT) ; // input from the Sound Detection Module
 
}
void loop ()
{
  soundDetectedVal = analogRead (soundDetectedPin) ; // read the sound alarm time  
  
  //Serial.println(soundDetectedVal);
  if (soundDetectedVal > 400) // If we hear a sound //change this value for increasing/decreasing sensitivity
  {
  
    lastSoundDetectTime = millis(); // record the time of the sound alarm
    // The following is so you don't scroll on the output screen
    if (!bAlarm){
      Serial.println("LOUD, LOUD");
      bAlarm = true;
    }
  }
  else
  {
    if( (millis()-lastSoundDetectTime) > soundAlarmTime  &&  bAlarm){
      Serial.println("quiet");
        bAlarm = false;
    }
  }
}

```
## REFERENCES
[https://www.instructables.com/id/Arduino-Sound-Sensor-with-LED/](https://www.instructables.com/id/Arduino-Sound-Sensor-with-LED/)