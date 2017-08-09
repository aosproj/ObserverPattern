//
//  ConcreteProduct.cpp
//  OberverPattern
//
//  Created by Shashwat Gupta on 8/8/17.
//  Copyright © 2017 Shashwat Gupta. All rights reserved.
//

#include "ConcreteProduct.hpp"

void ConcreteProduct::ChangePrice(float price)
{
    Notify(price);
}
