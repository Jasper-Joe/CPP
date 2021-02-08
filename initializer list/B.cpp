//
//  B.cpp
//  Const
//
//  Created by Jinglun Zhou on 2021/2/8.
//

#include "B.hpp"
#include "A.hpp"
// use member initializer list, A's default constructor won't get called
B::B():a(3), y(100) {
    // Also use member initializer list to set const member variables
    cout<<y<<endl;
}
