//
//  main.cpp
//  local static
//
//  Created by Jinglun Zhou on 2021/5/21.
//

#include <iostream>
using namespace std;
class Singleton {
public:
    Singleton() {
        cout << "created" << endl;
    }
    static Singleton& get() {
        static Singleton instance;
        return instance;
    }
    
    void hello() {
        cout << "singleton" << endl;
    }
};

int main(int argc, const char * argv[]) {
    Singleton::get().hello();
    Singleton::get().hello();
    Singleton::get().hello();
    // results:
    //created
    //singleton
    //singleton
    //singleton
    
    // the instance only created once
    
    return 0;
}
