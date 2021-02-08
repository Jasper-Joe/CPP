//
//  main.cpp
//  Virtual Function
//
//  Created by Jinglun Zhou on 2021/2/8.
//

#include <iostream>
using namespace std;
class base {
public:
    virtual void print() {
        cout<<"print base class"<<endl;
    }
    
    void show() {
        cout<<"show base class"<<endl;
    }
};

class derived : public base {
public:
    void print() {
        cout<<"print derived class"<<endl;
    }
    
    void show() {
        cout<<"show derived class"<<endl;
    }
};
int main(int argc, const char * argv[]) {
    base* bptr;
    derived* d = new derived();
    bptr = d;
    bptr->print();// with virtual, result: print derived class
    bptr->show();// without virtual, result: show base class

    return 0;
}
