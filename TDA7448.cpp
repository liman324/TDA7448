#include <Arduino.h>
#include <Wire.h>
#include "TDA7448.h"

TDA7448::TDA7448(){
	Wire.begin();
}

void TDA7448::setAtt(int spek, int att_spek){
      switch(spek){
        case 1: spek = TDA7448_1;break;
        case 2: spek = TDA7448_2;break;
        case 3: spek = TDA7448_3;break;  
        case 4: spek = TDA7448_4;break;
        case 5: spek = TDA7448_5;break;
        case 6: spek = TDA7448_6;break;   
}
       att_spek = abs(att_spek);
  writeWire(spek, att_spek);
}



void TDA7448::writeWire(char a, char b){
  Wire.beginTransmission(TDA7448_address);
  Wire.write (a);
  Wire.write (b);
  Wire.endTransmission();
}
