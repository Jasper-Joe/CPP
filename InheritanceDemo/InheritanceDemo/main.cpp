//
//  main.cpp
//  InheritanceDemo
//
//  Created by Jinglun Zhou on 2021/4/30.
//

#include <iostream>
using namespace std;

class Entity {
public:
    float X, Y;
    void Move(float xa, float ya) {
        X += xa;
        Y += ya;
    }
};

class Player : public Entity {
public:
    const char* Name;
    void PrintName() {
        cout<<Name<<endl;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    Player p;
    p.Name = "Jasper";
    cout<<p.Name<<endl;
    return 0;
}
