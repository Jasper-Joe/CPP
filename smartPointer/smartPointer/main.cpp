//
//  main.cpp
//  smartPointer
//
//  Created by Jinglun Zhou on 2021/5/6.
//

#include <iostream>
#include <memory>
using namespace std;

class Entity {
public:
    Entity() {
        cout<< "Created Entity" << endl;
    }
    
    ~Entity() {
        cout << "Destroyed Entity" << endl;
    }
    
    void print() {
        cout << "Inside entity" <<endl;
    }
};

int main(int argc, const char * argv[]) {
    
    {
        // when the entity get out of the scope, the entity will be destroyed
        unique_ptr<Entity> entity = make_unique<Entity>();
        entity->print();
        
    }
   
    return 0;
}
