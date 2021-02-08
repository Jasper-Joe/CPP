//
//  B.hpp
//  Const
//
//  Created by Jinglun Zhou on 2021/2/8.
//

#ifndef B_hpp
#define B_hpp

#include <stdio.h>
#include <iostream>
#include "A.hpp"
using namespace std;
class B {
public:
    B();
private:
    A a;
    const int y;
};
#endif /* B_hpp */
