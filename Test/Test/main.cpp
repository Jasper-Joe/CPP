//
//  main.cpp
//  Test
//
//  Created by Jinglun Zhou on 2021/5/1.
//

#include <iostream>
using namespace std;
class base {
public:
    base() {
        cout<<"Creating base"<<endl;
    }
    ~base() {
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

    return 0;
}
