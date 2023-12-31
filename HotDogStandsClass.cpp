#ifndef HOTDOG_STAND_CLASS_CPP
#define HOTDOG_STAND_CLASS_CPP

#include "HotDogStandsClass.h"

using namespace std;

unsigned HotDogStandsClass::globalSoldCountUns = 0;

void HotDogStandsClass::hotDogsBuyUns(unsigned count) {
  if (inventoryAmountUns == 0) {
      cout << "*There are not any hot dogs left to be sold.*" << endl << endl;
      return;
  }
  else if (inventoryAmountUns < count) {
      cout << "*We only have " << inventoryAmountUns << " hot dog";
      cout << (inventoryAmountUns > 1 ? "s left.*" : "left.*") << endl << endl;
      return;
  }
  inventoryAmountUns -= count;
  soldAmountUns      += count;
  HotDogStandsClass::globalSoldCountUns += count;
}



#endif