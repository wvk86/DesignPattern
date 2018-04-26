#pragma once
#include "CondimentDecorator.h"
#include <memory>

class Milk : public CondimentDecorator
{
public:
   std::shared_ptr<Beverage> beverage;

   Milk(std::shared_ptr<Beverage> beverage);
   ~Milk() {};

   double cost();
   std::string getDescription();
};

