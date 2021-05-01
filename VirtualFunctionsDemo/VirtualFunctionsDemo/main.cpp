//
//  main.cpp
//  VirtualFunctionsDemo
//
//  Created by Jinglun Zhou on 2021/4/30.
//

#include <iostream>
using namespace std;

class Entity {
public:
    virtual string getName() {
        return "Entity";
    }
};

class Player : public Entity {
private:
    string m_Name;
public:
    Player(const string& name): m_Name(name){}
    string getName() {
        return m_Name;
    }
};

void PrintName(Entity* entity) {
    cout<<entity->getName()<<endl;
    // passed into player, also print "entity"
    // add virtual key word to solve that
}

int main(int argc, const char * argv[]) {
    Entity* e = new Entity();
    PrintName(e);
    Player* p = new Player("Jasper");
    PrintName(p);


    return 0;
}
