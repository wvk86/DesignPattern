// StarbuzzDecorator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <memory>

// Beverages
#include "Beverage.h"
#include "HouseBlend.h"
#include "DarkRoast.h"
#include "Decaf.h"
#include "Espresso.h"

// Condiments
#include "Whip.h"
#include "Soy.h"
#include "Milk.h"
#include "Mocha.h"

int main()
{
   std::shared_ptr<Beverage> beverage = std::make_shared<Espresso>();
   std::cout << beverage->getDescription() << " " << beverage->cost() << std::endl;

   std::shared_ptr<Beverage> beverage2 = std::make_shared<DarkRoast>();
   beverage2 = std::make_shared<Mocha>(std::move(beverage2));
   beverage2 = std::make_shared<Mocha>(std::move(beverage2));
   beverage2 = std::make_shared<Whip>(std::move(beverage2));
   std::cout << beverage2->getDescription() << " " << beverage2->cost() << std::endl;

   std::shared_ptr<Beverage> beverage3 = std::make_shared<HouseBlend>();
   beverage3 = std::make_shared<Soy>(std::move(beverage3));
   beverage3 = std::make_shared<Mocha>(std::move(beverage3));
   beverage3 = std::make_shared<Whip>(std::move(beverage3));
   std::cout << beverage3->getDescription() << " " << beverage3->cost() << std::endl;

   return 0;
}

