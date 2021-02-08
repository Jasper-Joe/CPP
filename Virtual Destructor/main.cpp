//
//  main.cpp
//  VirtualDestructor
//
//  Created by Jinglun Zhou on 2021/2/8.
//

#include <iostream>
using namespace std;
class base {
public:
    base() {
        cout<<"Creating base"<<endl;
    }
    virtual ~base() {
        cout<<"Destructing base"<<endl;
    }
};

class derived: public base {
public:
    derived() {
        cout<<"Creating derived"<<endl;
    }
    ~derived() {
        cout<<"Destructing derived"<<endl;
    }
};


int main(int argc, const char * argv[]) {
    derived *d = new derived();
    base* b = d;
    delete b;
    /*
     without using virtual
     results:
     Creating base
     Creating derived
     Destructing base
     */
    
    /*
     Making base class destructor virtual guarantees that the object of derived class is destructed properly
     */
    
    return 0;
}
