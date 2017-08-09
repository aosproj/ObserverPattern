//
//  main.cpp
//  OberverPattern
//
//  Created by Shashwat Gupta on 8/8/17.
//  Copyright © 2017 Shashwat Gupta. All rights reserved.
//

#include <iostream>
#include "ConcreteShop.hpp"
#include "ConcreteProduct.hpp"

int main(int argc, const char * argv[])
{
    ConcreteProduct product1;
    
    ConcreteShop shop1("Shop1");
    ConcreteShop shop2("Shop2");
    
    product1.Attach(&shop1);
    product1.Attach(&shop2);
    
    product1.ChangePrice(12.0f);
    
    product1.Detach(&shop2);
    
    product1.ChangePrice(23.0f);
    
    ConcreteShop shop3("Shop3");
    product1.Attach(&shop3);
    
    product1.ChangePrice(13.5f);
    return 0;
}
