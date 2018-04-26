#pragma once
#include "CondimentDecorator.h"
class Milk : public CondimentDecorator
{
public:
   Beverage * beverage;

   Milk(Beverage * beverage);
   ~Milk() {};

   double cost();
   std::string getDescription();
};

