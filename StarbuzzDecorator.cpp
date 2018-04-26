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
   Beverage *beverage = new Espresso();
   std::cout << beverage->getDescription() << " " << beverage->cost() << std::endl;

   Beverage *beverage2 = new DarkRoast();
   beverage2 = new Mocha(beverage2);
   beverage2 = new Mocha(beverage2);
   beverage2 = new Whip(beverage2);
   std::cout << beverage2->getDescription() << " " << beverage2->cost() << std::endl;

   Beverage *beverage3 = new HouseBlend();
   beverage3 = new Soy(beverage3);
   beverage3 = new Mocha(beverage3);
   beverage3 = new Whip(beverage3);
   std::cout << beverage3->getDescription() << " " << beverage3->cost() << std::endl;

   if (beverage != NULL)
   {
      delete beverage;
      beverage = NULL;
   }

   if (beverage2 != NULL)
   {
      delete beverage2;
      beverage2 = NULL;
   }

   if (beverage3 != NULL)
   {
      delete beverage3;
      beverage3 = NULL;
   }

   return 0;
}

