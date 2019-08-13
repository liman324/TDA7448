#include <Wire.h>
#include <TDA7448.h>
 TDA7448 tda;

 void setup(){Wire.begin();}

 void loop(){
  audio_tda();
  delay(1000);
  }
 void audio_tda(){
  tda.setAtt(1,0);// 0 макс громк, -79(79) мин громк
  tda.setAtt(2,0);
  tda.setAtt(3,0);
  tda.setAtt(4,0);
  tda.setAtt(5,0);
  tda.setAtt(6,0);
  }
