//
//  main.cpp
//  constDemo
//
//  Created by Jinglun Zhou on 2021/5/4.
//

#include <iostream>
using namespace std;

class Entity {
private:
    int m_X, m_Y;
public:
    int getX() const { // will not change class, only read data
        return m_X;
    }
};

void printEntity(const Entity& e) {
    // since e is const, function getX() must also be marked as const
    // meaning the function will not change e
    cout << e.getX() << endl;
}

int main(int argc, const char * argv[]) {
    
    Entity e;
    printEntity(e);

    return 0;
}
