//
//  AbstractProduct.h
//  OberverPattern
//
//  Created by Shashwat Gupta on 8/8/17.
//  Copyright © 2017 Shashwat Gupta. All rights reserved.
//

#ifndef AbstractProduct_h
#define AbstractProduct_h

#include <vector>
#include "ConcreteShop.hpp"
/* Abstract Subject Class */
class AbstractProduct
{
private:
    std::vector<ConcreteShop*> Observers;
public:
    void Attach(ConcreteShop*);
    void Detach(ConcreteShop*);
    void Notify(float price);
};

#endif /* AbstractProduct_h */
