//
//  ConcreteShop.cpp
//  OberverPattern
//
//  Created by Shashwat Gupta on 8/8/17.
//  Copyright © 2017 Shashwat Gupta. All rights reserved.
//
#include <iostream>
#include "ConcreteShop.hpp"

ConcreteShop::ConcreteShop(std::string name)
{
    this->name = name;
}

void ConcreteShop::Update(float price)
{
    this->price = price;
    std::cout << "The price update at shop " << name << "is" << price << std::endl;
}
