#pragma once
#include "CondimentDecorator.h"

class Soy : public CondimentDecorator
{
public:
   Beverage * beverage;

   Soy(Beverage * beverage);
   ~Soy() {};

   double cost();
   std::string getDescription();
};

