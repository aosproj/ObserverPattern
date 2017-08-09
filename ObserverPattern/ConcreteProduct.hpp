//
//  ConcreteProduct.hpp
//  OberverPattern
//
//  Created by Shashwat Gupta on 8/8/17.
//  Copyright © 2017 Shashwat Gupta. All rights reserved.
//

#ifndef ConcreteProduct_hpp
#define ConcreteProduct_hpp

#include "AbstractProduct.hpp"

class ConcreteProduct:public AbstractProduct
{
public:
    void ChangePrice(float price);
};

#endif /* ConcreteProduct_hpp */
