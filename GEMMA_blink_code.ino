/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 
  To upload to your  or Trinket:
  1) Select the proper board from the Tools->Board Menu (Arduino Gemma if
     teal, Adafruit Gemma if black)
  2) Select the uploader from the Tools->Programmer ("Arduino Gemma" if teal, 
   "USBtinyISP" if black Gemma)
  3) Plug in the Gemma into USB, make sure you see the green LED lit
  4) For windows, make sure you install the right Gemma drivers
  5) Press the button on the Gemma/Trinket - verify you see
     the red LED pulse. This means it is ready to receive data
  6) Click the upload button above within 10 seconds
*/
 
int led = 1; // blink 'digital' pin 1 - AKA the built in red LED
int D1 = 2; 
int D0 = 0;
int brightness = 0;    // how bright the LED is
int fadeAmount = 5;    // how many points to fade the LED by
int repeater = 7;       // timer for fading lights
int fader = 50;

// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);
  pinMode(D1,OUTPUT);
  pinMode(D0,OUTPUT);
}
 
// the loop routine runs over and over again forever:
void loop() {
    repeater = 7;
    fader = 50;
    brightness = 0;
    analogWrite(D0,brightness);
    digitalWrite(led, HIGH); 
    digitalWrite(D1,LOW);
    delay(1000);
    digitalWrite(D1, HIGH); 
    digitalWrite(led,LOW);
    delay(1000);
    digitalWrite(led, HIGH); 
    digitalWrite(D1,LOW);
    delay(500);
    digitalWrite(D1, HIGH); 
    digitalWrite(led,LOW);
    delay(500);
    digitalWrite(led, HIGH); 
    digitalWrite(D1,LOW);
    delay(100);
    digitalWrite(led, LOW);
    digitalWrite(D1,HIGH);
    delay(100);
    digitalWrite(led, HIGH); 
    digitalWrite(D1,LOW);
    delay(100);
    digitalWrite(led, LOW);
    digitalWrite(D1,HIGH);
    delay(100);
//    for (int repeater = 7; repeater >= 2; repeater--) {
//      for (int fader = 50; fader >=2; fader--){
//        analogWrite(D0, brightness);
//        // change the brightness for next time through the loop:
//        brightness = brightness + fadeAmount;
//        // reverse the direction of the fading at the ends of the fade:
//        // if (brightness == 0 || brightness == 255) {
//        //   fadeAmount = -fadeAmount ;
//        // wait for 30 milliseconds to see the dimming effect
//        delay(30);
//        //}
//      }
//    }
}

