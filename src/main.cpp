//#include <Arduino.h>

#include <TRGBSuppport.h>

TRGBSuppport trgb;
void setup() {
  Serial.begin(115200);
  Serial.setTxTimeoutMs(1);  // workaround for blocking output if no host is connected to native USB CDC
  delay(100);   // Rumors say it helps avoid sporadical crashes after wakeup from deep-sleep
  trgb.init();
  
  // load your UI etc. (see example https://github.com/fablabnbg/TRGBArduinoSupport/tree/main/examples/ui_example)
}

void loop() {

// your loop code

}
