//
//  main.cpp
//  Pure Virtual Function
//
//  Created by Jinglun Zhou on 2021/2/8.
//

#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() = 0;
};

class Derived: public Base {
public:
    void show() {
        cout<<"In derived"<<endl;
    }
};

int main(int argc, const char * argv[]) {
    Base* ptr = new Derived();
    ptr->show(); // result: In derived
    return 0;
}
