#include "GLOBALS.h"

void setup() 
{
  Serial.begin(9600);
  Wire.begin();                                   // Start Wire library for I2C

  // SSD1306_SWITCHCAPVCC = generate display voltage from 3.3V internally
  while(1)
  {
    if(display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS))     // initialize OLED with I2C addr 0x3C
      break; 
    else
      Serial.println(F("SSD1306 allocation failed")); 
  }
  
  display.clearDisplay();                         // Clear the display buffer
  display.setTextColor(WHITE);                    //Set the color - always use white despite actual display color

  buzz.initBuzzer();                              //Initialize the buzzer

  scrollAnimation();
}

void loop() 
{
  
  if (dht.alarmTemperature()) 
  {
    // buzz.on();
    buzz.nonBlockOn();
  }
  else 
    buzz.off();

  // dht.display();

  weatherAnimate(5,10,true);

}
