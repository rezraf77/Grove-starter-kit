#include <rgb_lcd.h>
#include <Wire.h>

rgb_lcd lcd; //declare an object of type rgb_lcd

void setup() 
{
  // initialize lcd
  lcd.begin(16,2);

  //initalize serial moitor
  Serial.begin(9600);

  
  //set cursor to the first line (column,row)
  lcd.setCursor(0,0);
  
/*
  //turning on autoscroll
  lcd.autoscroll();
  
  char scrollText[] = "AUTOSCROLLING EXAMPLE";
  for(int i = 0 ; scrollText[i] != '\0' ; ++i)
    {
      
    lcd.print(scrollText[i]);
    Serial.print(scrollText[i]);
    delay(500);
    }  

  //turning off autoscroll  
  lcd.noAutoscroll();
*/

  
}

void breath(unsigned char color)
{

    for(int i=0; i<255; i++)
    {
        lcd.setPWM(color, i);
        delay(5);
    }

    delay(500);
    for(int i=254; i>=0; i--)
    {
        lcd.setPWM(color, i);
        delay(5);
    }

    delay(500);
}


void loop() 
{ 

  lcd.print("BASIC COLORS");
  Serial.println("BASIC COLORS");
  Serial.println();
  delay(1000);
  lcd.clear();
  //changing color(R,G,B) each with values 0-255

  //Color RED
  lcd.setRGB(255,0,0);
  lcd.print("RED");
  Serial.println("RED");
  delay(1000);
  lcd.clear();

  //Color GREEN
  lcd.setRGB(0,128,0);
  lcd.print("GREEN");
  Serial.println("GREEN");
  delay(1000);
  lcd.clear();

  //Color BLUE
  lcd.setRGB(0,0,255);
  lcd.print("BLUE");
  Serial.println("BLUE");
  delay(1000);
  lcd.clear();


  //Color BLACK
  lcd.setRGB(0,0,0);
  lcd.print("BLACK");
  Serial.println("BLACK");
  delay(1000);
  lcd.clear();

  //Color WHITE
  lcd.setRGB(255,255,255);
  lcd.print("WHITE");
  Serial.println("WHITE");
  delay(1000);
  lcd.clear();

  //Color LIME
  lcd.setRGB(0,255,0);
  lcd.print("LIME");
  Serial.println("LIME");
  delay(1000);
  lcd.clear();

  //Color YELLOW
  lcd.setRGB(255,255,0);
  lcd.print("YELLOW");
  Serial.println("YELLOW");
  delay(1000);
  lcd.clear();
  
  //Color AQUA
  lcd.setRGB(0,255,255);
  lcd.print("AQUA");
  Serial.println("AQUA");
  delay(1000);
  lcd.clear();

  //Color MAGENTA
  lcd.setRGB(255,0,255);
  lcd.print("MAGENTA");
  Serial.println("MAGENTA");
  delay(1000);
  lcd.clear();

  //Color SILVER
  lcd.setRGB(192,192,192);
  lcd.print("SILVER");
  Serial.println("SILVER");
  delay(1000);
  lcd.clear();

  //Color GRAY
  lcd.setRGB(128,128,128);
  lcd.print("GRAY");
  Serial.println("GRAY");
  delay(1000);
  lcd.clear();

  //Color MAROON
  lcd.setRGB(128,0,0);
  lcd.print("MAROON");
  Serial.println("MAROON");
  delay(1000);
  lcd.clear();

  //Color OLIVE
  lcd.setRGB(128,128,0);
  lcd.print("OLIVE");
  Serial.println("OLIVE");
  delay(1000);
  lcd.clear();

  //Color PURPLE
  lcd.setRGB(128,0,128);
  lcd.print("PURPLE");
  Serial.println("PURPLE");
  delay(1000);
  lcd.clear();
  
  //Color TEAL
  lcd.setRGB(0,128,128);
  lcd.print("TEAL");
  Serial.println("TEAL");
  delay(1000);
  lcd.clear();

  //Color NAVY
  lcd.setRGB(0,0,128);
  lcd.print("NAVY");
  Serial.println("NAVY");
  delay(1000);
  lcd.clear();


  lcd.setRGB(255,255,255);

  
  Serial.println();
  Serial.println("CURSOR MODE");
  Serial.println();
  //Turning Cursor on
  lcd.cursor();
  lcd.print("CURSOR ON");
  Serial.println("CURSOR ON");
  delay(1000);
  lcd.clear();

  //Turning Cursor off
  lcd.noCursor();
  lcd.print("CURSOR OFF");
  Serial.println("CURSOR OFF");
  delay(1000);
  lcd.clear();

  Serial.println();
  Serial.println("DISPLAY MODE");
  Serial.println();
  // Turn off the display:
  lcd.noDisplay();
  Serial.println("DISPLAY OFF");
  delay(1000);
  // Turn on the display:
  lcd.display();
  Serial.println("DISPLAY ON");
  delay(1000);


}
