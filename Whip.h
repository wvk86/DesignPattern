#pragma once
#include "CondimentDecorator.h"
#include <memory>

class Whip : public CondimentDecorator
{
public:
   std::shared_ptr<Beverage> beverage;

   Whip(std::shared_ptr<Beverage> beverage);
   ~Whip() {};

   double cost();
   std::string getDescription();
};

