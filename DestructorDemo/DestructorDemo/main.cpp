//
//  main.cpp
//  DestructorDemo
//
//  Created by Jinglun Zhou on 2021/4/30.
//

#include <iostream>
using namespace std;
class Entity {
public:
    float X, Y;
    Entity(){}
    Entity(float x, float y) {
        X = x;
        Y = y;
        cout<<"Entity Created"<<endl;
    }
    
    ~Entity(){
        cout<<"Destroyed Entity"<<endl;
    }
    void Print() {
        cout<<X<<" "<<Y<<endl;
    }
    
    
};

void run() {
    Entity e(3.14, 0.12);
    e.Print();
}
int main(int argc, const char * argv[]) {
    run();
    return 0;
}
