// Александр Лиман
// liman324@yandex.ru

#ifndef TDA7448_H
#define TDA7448_H
// address 7 bit
#define TDA7448_address 0b1000100

//Sub addresses
#define TDA7448_1       0b00000000 
#define TDA7448_2       0b00000001 
#define TDA7448_3       0b00000010 
#define TDA7448_4       0b00000011 
#define TDA7448_5       0b00000100 
#define TDA7448_6       0b00000101

#include <Arduino.h>
class TDA7448
{
  public:
    TDA7448();        
        void setAtt(int spek, int att_spek); 

  private:
	void writeWire(char a, char b);
};
	
#endif //TDA7448_H


