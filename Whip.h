#pragma once
#include "CondimentDecorator.h"

class Whip : public CondimentDecorator
{
public:
   Beverage * beverage;

   Whip(Beverage * beverage);
   ~Whip() {};

   double cost();
   std::string getDescription();
};

