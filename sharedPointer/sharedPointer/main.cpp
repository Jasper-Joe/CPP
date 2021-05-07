//
//  main.cpp
//  sharedPointer
//
//  Created by Jinglun Zhou on 2021/5/6.
//

#include <iostream>
#include <memory>

using namespace std;

class Entity {
public:
    Entity() {
        cout << "Created" <<endl;
    }
    ~Entity() {
        cout << "Destroyed" << endl;
    }
};

int main(int argc, const char * argv[]) {
    
    {
        shared_ptr<Entity> e;
        {
            // weak_ptr will not increase reference count
            shared_ptr<Entity> sharedEntity = make_shared<Entity>();
            e = sharedEntity;
        }
        cout << "?" << endl;
    }
    
    

    return 0;
}
