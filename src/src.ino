#include "GLOBALS.h"

void setup() 
{
  Serial.begin(9600);
  Wire.begin();                                   // Start Wire library for I2C

  // SSD1306_SWITCHCAPVCC = generate display voltage from 3.3V internally
  if(!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;); // Don't proceed, loop forever
  }      // initialize OLED with I2C addr 0x3C

  buzz.initBuzzer();                              //Initialize the buzzer

  display.setTextColor(WHITE);                    //Set the color - always use white despite actual display color
  display.clearDisplay();                         // Clear the display buffer

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
