#include "stdafx.h"
#include "Soy.h"


Soy::Soy(Beverage * beverage)
{
   this->beverage = beverage;
}

std::string Soy::getDescription()
{
   return beverage->getDescription() + ", Soy";
}

double Soy::cost()
{
   return 0.15 + beverage->cost();
}