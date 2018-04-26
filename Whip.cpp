#include "stdafx.h"
#include "Whip.h"

Whip::Whip(std::shared_ptr<Beverage> beverage)
{
   this->beverage = beverage;
}

std::string Whip::getDescription()
{
   return beverage->getDescription() + ", Whip";
}

double Whip::cost()
{
   return 0.10 + beverage->cost();
}