//
//  main.cpp
//  pureVirtualFuncDemo
//
//  Created by Jinglun Zhou on 2021/5/1.
//

#include <iostream>
using namespace std;

class Printable {
public:
    virtual void getClassName() = 0;
};

class Entity : public Printable {
public:
    void getClassName() override {
        cout<<"Entity"<<endl;
    }
};

class Player : public Entity {
private:
    string m_Name;
public:
    Player (const string& name): m_Name(name) {}
    void getClassName() override {
        cout<<"Player"<<endl;
    }
};

void print(Printable* obj) {
    obj->getClassName();
}



int main(int argc, const char * argv[]) {
    
    Entity* p = new Player("Jasper");
    Entity* e = new Entity();
    print(p);
    print(e);
    
    return 0;
}
