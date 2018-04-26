#pragma once
#include "CondimentDecorator.h"
class Mocha : public CondimentDecorator
{
public:
   Beverage * beverage;

   Mocha(Beverage * beverage);
   ~Mocha() {};

   double cost();
   std::string getDescription();
};

