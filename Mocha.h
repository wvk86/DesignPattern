#pragma once
#include "CondimentDecorator.h"
#include <memory>

class Mocha : public CondimentDecorator
{
public:
   std::shared_ptr<Beverage> beverage;

   Mocha(std::shared_ptr<Beverage> beverage);
   ~Mocha() {};

   double cost();
   std::string getDescription();
};

