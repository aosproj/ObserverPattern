//
//  AbstractProduct.cpp
//  OberverPattern
//
//  Created by Shashwat Gupta on 8/8/17.
//  Copyright © 2017 Shashwat Gupta. All rights reserved.
//

#include<iostream>
#include <algorithm>
#include "AbstractProduct.hpp"

void AbstractProduct::Attach(ConcreteShop *shop)
{
    Observers.push_back(shop);
}

void AbstractProduct::Detach(ConcreteShop* shop)
{
    Observers.erase(std::remove(Observers.begin(), Observers.end(), shop),Observers.end());
}

void AbstractProduct::Notify(float price)
{
    std::vector<ConcreteShop*>::iterator iter;
    
    std::cout << std::endl;
    
    for(iter = Observers.begin(); iter < Observers.end(); iter++)
    {
        if((*iter != nullptr))
        {
            (*iter)->Update(price);
        }
    }
}
