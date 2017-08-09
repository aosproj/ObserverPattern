//
//  AbstractShop.hpp
//  OberverPattern
//
//  Created by Shashwat Gupta on 8/8/17.
//  Copyright © 2017 Shashwat Gupta. All rights reserved.
//

#ifndef AbstractShop_hpp
#define AbstractShop_hpp

#include <stdio.h>
#include <string>

class AbstractShop
{
public:
    virtual void Update(float price) = 0;
};

#endif /* AbstractShop_hpp */
