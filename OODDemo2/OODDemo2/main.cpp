//
//  main.cpp
//  OODDemo2
//
//  Created by Jinglun Zhou on 2021/5/2.
//

#include <iostream>
using namespace std;
class Warrior {
private:
    int attkMax;
    int blockMax;
public:
    string name;
    int health;
    Warrior(string name, int health, int attkMax, int blockMax) {
        this->name = name;
        this->health = health;
        this->attkMax = attkMax;
        this->blockMax = blockMax;
    }
    int attack() {
        return rand() % this->attkMax;
    }
    int block() {
        return rand() % this->blockMax;
    }
    
};

class Battle {
public:
    static void startFight(Warrior& warrior1, Warrior& warrior2) {
        while (true) {
            if (getAttackResult(warrior1, warrior2) == "Game Over") {
                cout<<"Game Over"<<endl;
                break;
            }
            
            if (getAttackResult(warrior2, warrior1) == "Game Over") {
                cout<<"Game Over"<<endl;
                break;
            }
        }
    }
    
    static string getAttackResult(Warrior& warriorA, Warrior& warriorB) {
        int warriorAAttkAmt = warriorA.attack();
        int warriorBBlockAmt = warriorB.block();
        int damage2WarriorB = warriorAAttkAmt - warriorBBlockAmt;
        if (damage2WarriorB < 0) {
            damage2WarriorB = 0;
        }
        warriorB.health -= damage2WarriorB;
        printf("%s attacks %s and deals %d damage\n", warriorA.name.c_str(), warriorB.name.c_str(), damage2WarriorB);
        
        printf("%s is down to %d health\n", warriorB.name.c_str(), warriorB.health);
        if (warriorB.health <= 0) {
            printf("%s has died and %s is victorious\n", warriorB.name.c_str(), warriorA.name.c_str());
            return "Game Over";
        }
        return "Fight Again";
        
        
    }
};
int main(int argc, const char * argv[]) {
    return 0;
}
