//
//  ConcreteShop.hpp
//  OberverPattern
//
//  Created by Shashwat Gupta on 8/8/17.
//  Copyright © 2017 Shashwat Gupta. All rights reserved.
//

#ifndef ConcreteShop_hpp
#define ConcreteShop_hpp

#include <string>
#include "AbstractShop.hpp"

class ConcreteShop: public AbstractShop
{
    std::string name;
    float price;
    
public:
    ConcreteShop(std::string name);
    void Update(float price);
};
#endif /* ConcreteShop_hpp */
