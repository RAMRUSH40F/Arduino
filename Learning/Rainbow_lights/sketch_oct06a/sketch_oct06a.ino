#include <Adafruit_NeoPixel.h>

#define PIN 4   // input pin Neopixel is attached to

#define NUMPIXELS      16 // number of neopixels in strip

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int delayval = 1000; // timing delay in milliseconds


void setup() {
  // Initialize the NeoPixel library.
  pixels.begin();

}
  int color1=0;int color2=0;int color3 = 0;
  void setcolor(){
     color1 =random(0,254);
     color2 =random(0,254);
     color3 =random(0,254);
     }
             
void loop() {

  for (int i=0; i < NUMPIXELS; i++) {
    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
 
         
    setcolor();
    
    pixels.setBrightness(50);
   
    pixels.setPixelColor(i, pixels.Color(color1, color2, color3));

    // This sends the updated pixel color to the hardware.
    pixels.show();

    // Delay for a period of time (in milliseconds).
    delay(delayval);
    if (i > 2){    
    pixels.setPixelColor(i-2, pixels.Color(0, 0, 0));
  }
    if ( i==0){
       pixels.setPixelColor(14, pixels.Color(0, 0, 0));
    }
    if ( i==1){
       pixels.setPixelColor(15, pixels.Color(0, 0, 0));
    }
    if ( i==3){
       pixels.setPixelColor(0, pixels.Color(0, 0, 0));
    }
   
    
  }
      
    
    
  
  //для змейки оно должно
}
