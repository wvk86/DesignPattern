#pragma once
#include "CondimentDecorator.h"
#include <memory>

class Soy : public CondimentDecorator
{
public:
   std::shared_ptr<Beverage> beverage;

   Soy(std::shared_ptr<Beverage> beverage);
   ~Soy() {};

   double cost();
   std::string getDescription();
};

