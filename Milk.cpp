#include "stdafx.h"
#include "Milk.h"


Milk::Milk(std::shared_ptr<Beverage> beverage)
{
   this->beverage = beverage;
}

std::string Milk::getDescription()
{
   return beverage->getDescription() + ", Milk";
}

double Milk::cost()
{
   return 0.10 + beverage->cost();
}