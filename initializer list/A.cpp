//
//  A.cpp
//  Const
//
//  Created by Jinglun Zhou on 2021/2/8.
//

#include "A.hpp"
A:: A() {
    cout<<"A's default constructor"<<endl;
    x = 0;
}

A::A(int x) {
    cout<<"A's another constructor"<<endl;
    this->x = x;
}
