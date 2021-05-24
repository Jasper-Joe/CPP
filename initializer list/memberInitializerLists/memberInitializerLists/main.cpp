//
//  main.cpp
//  memberInitializerLists
//
//  Created by Jinglun Zhou on 2021/5/23.
//

#include <iostream>
#include <string>
using namespace std;

class Example {
public:
    Example() {
        cout << "Created Entity!" << endl;
    }
    
    Example(int x) {
        cout << "Created Entity with " << x <<endl;
    }
};

class Entity {
private:
    string m_Name;
    Example m_Example;
public:
    Entity() {
        m_Name = "Unknown";
        m_Example = Example(8);
    }
    
    Entity(const string& name): m_Name(name),m_Example(8) {
    }
    
    void getName() {
        cout << m_Name <<endl;
    }
};

int main(int argc, const char * argv[]) {
    Entity e("Jasper"); // if not using member initializer lists, example object will be created twice
    e.getName();
    

    return 0;
}
