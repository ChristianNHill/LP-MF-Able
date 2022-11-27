#include <Adafruit_NeoPixel.h>
#define LED_PIN    10
#define LED_COUNT 8
Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRBW + NEO_KHZ800);

// These constants won't change. They're used to give names to the pins used:
const int analogInPin = A0;  // Analog input pin that the potentiometer is attached to

int sensorValue = 0;        // value read from the pot
int outputValue = 0;        // value output to the PWM (analog out)

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);

    strip.begin();           // INITIALIZE NeoPixel strip object (REQUIRED)
  strip.show();            // Turn OFF all pixels ASAP
  strip.setBrightness(50); // Set BRIGHTNESS to about 1/5 (max = 255)
}

void loop() {
     strip.clear();
  // read the analog in value:
  sensorValue = analogRead(analogInPin);
  // map it to the range of the analog out:
  outputValue = map(sensorValue, 0, 1023, 0, 255);
  // change the analog out value:

  // print the results to the Serial Monitor:
  Serial.print("sensor = ");
  Serial.print(sensorValue);
  Serial.print("\t output = ");
  Serial.println(outputValue);
if(outputValue < 5){
    strip.setPixelColor(0, strip.Color(0, 0, 0));         //  Set pixel's color (in RAM)
    strip.show();                  
}
 if(outputValue >= 31){
    strip.setPixelColor(0, strip.Color(0, 0, 0, 50));         //  Set pixel's color (in RAM)
    strip.show();                  
}       
if(outputValue >= 62){
    strip.setPixelColor(0, strip.Color(0, 0, 0, 50));         //  Set pixel's color (in RAM)
    strip.setPixelColor(1, strip.Color(0, 0, 0, 50));         //  Set pixel's color (in RAM)
    strip.show();                  
}       
if(outputValue >= 93){
    strip.setPixelColor(0, strip.Color(0, 0, 0, 50));         //  Set pixel's color (in RAM)
    strip.setPixelColor(1, strip.Color(0, 0, 0, 50));         //  Set pixel's color (in RAM)
    strip.setPixelColor(2, strip.Color(0, 0, 0, 50));         //  Set pixel's color (in RAM)
    strip.show();                  
}       
   if(outputValue >= 124){
    strip.setPixelColor(0, strip.Color(0, 0, 0, 50));         //  Set pixel's color (in RAM)
    strip.setPixelColor(1, strip.Color(0, 0, 0, 50));         //  Set pixel's color (in RAM)
    strip.setPixelColor(2, strip.Color(0, 0, 0, 50));         //  Set pixel's color (in RAM)
    strip.setPixelColor(3, strip.Color(0, 0, 0, 50));         //  Set pixel's color (in RAM)
    strip.show();                  
}     
if(outputValue >= 155){
    strip.setPixelColor(0, strip.Color(0, 0, 0, 50));         //  Set pixel's color (in RAM)
    strip.setPixelColor(1, strip.Color(0, 0, 0, 50));         //  Set pixel's color (in RAM)
    strip.setPixelColor(2, strip.Color(0, 0, 0, 50));         //  Set pixel's color (in RAM)
    strip.setPixelColor(3, strip.Color(0, 0, 0, 50));         //  Set pixel's color (in RAM)
    strip.setPixelColor(4, strip.Color(0, 0, 0, 50));         //  Set pixel's color (in RAM)
    strip.show();                  
}     
if(outputValue >= 186){
    strip.setPixelColor(0, strip.Color(0, 0, 0, 50));         //  Set pixel's color (in RAM)
    strip.setPixelColor(1, strip.Color(0, 0, 0, 50));         //  Set pixel's color (in RAM)
    strip.setPixelColor(2, strip.Color(0, 0, 0, 50));         //  Set pixel's color (in RAM)
    strip.setPixelColor(3, strip.Color(0, 0, 0, 50));         //  Set pixel's color (in RAM)
    strip.setPixelColor(4, strip.Color(0, 0, 0, 50));         //  Set pixel's color (in RAM)
    strip.setPixelColor(5, strip.Color(0, 0, 0, 50));         //  Set pixel's color (in RAM)
    strip.show();                  
}     

    if(outputValue >= 195){
    strip.setPixelColor(0, strip.Color(0, 0, 0, 50));         //  Set pixel's color (in RAM)
    strip.setPixelColor(1, strip.Color(0, 0, 0, 50));         //  Set pixel's color (in RAM)
    strip.setPixelColor(2, strip.Color(0, 0, 0, 50));         //  Set pixel's color (in RAM)
    strip.setPixelColor(3, strip.Color(0, 0, 0, 50));         //  Set pixel's color (in RAM)
    strip.setPixelColor(4, strip.Color(0, 0, 0, 50));         //  Set pixel's color (in RAM)
    strip.setPixelColor(5, strip.Color(0, 0, 0, 50));         //  Set pixel's color (in RAM)
    strip.setPixelColor(7, strip.Color(0, 0, 0, 50));         //  Set pixel's color (in RAM)
    strip.show();                  
}                  

}
