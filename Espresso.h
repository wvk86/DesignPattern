#pragma once
#include "Beverage.h"
class Espresso : public Beverage
{
public:
   Espresso();
   ~Espresso() {};

   double cost();
};

