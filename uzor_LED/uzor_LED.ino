#include <Adafruit_NeoPixel.h>

#define PIN 4   // input pin Neopixel is attached to

#define NUMPIXELS      16 // number of neopixels in strip

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int delayval = 200; // timing delay in milliseconds


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
  void setPixel(int i) {
    pixels.setPixelColor(i, pixels.Color(color1, color2, color3));
    } 
    void off(int c){
       pixels.setPixelColor(c, pixels.Color(0, 0, 0));
      }          
void loop() {

  for (int b=0; b < NUMPIXELS; b++) {
    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255

  int i = b %16;
  pixels.setBrightness(50);
  setcolor();
    
   
  
    setPixel(i);
    setPixel(i+1);
    
    setPixel(i+3);
    setPixel(i+4);
    
    setPixel(i+6);
    setPixel(i+7);
    
    setPixel(i+9);
    setPixel(i+10);

    setPixel(i+12);
    setPixel(i+13);

    setPixel(i+15);
    

    
    pixels.show();
    delay(delayval);
    off(i);
    off(i);
    off(i+1);
    off(i+3);
    off(i+4);
    off(i+6);
    off(i+7);
    off(i+9);
    off(i+10);
    off(i+12);
    off(i+13);
    off(i+15);
      
    pixels.show(); 


 
    
    
    

  

    // Delay for a period of time (in milliseconds).
  
  /*  if (i > 2){    
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
   */
    
  }
      
    
    
  
  //для змейки оно должно
}
