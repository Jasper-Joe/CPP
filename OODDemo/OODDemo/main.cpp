//
//  main.cpp
//  OODDemo
//
//  Created by Jinglun Zhou on 2021/5/1.
//

#include <iostream>
using namespace std;

class Animal {
protected:
    string name;
    double height;
    double weight;
    static int numOfAnimals;
public:
    string getName() {
        return name;
    }
    
    void setName(string name) {
        this->name = name;
    }
    
    double getHeight() {
        return height;
    }
    
    void setHeight(double height) {
        this->height = height;
    }
    
    double getWeight() {
        return weight;
    }
    
    void setWeight(double weight) {
        this->weight = weight;
    }
    
    void setAll(string, double, double);
    Animal(string, double, double);
    Animal();
    ~Animal();
    static int getNumOfAnimals() {
        return numOfAnimals;
    }
    void toString();
    
    
};


int Animal:: numOfAnimals = 0;
void Animal::setAll(string name, double height, double weight) {
    this->name = name;
    this->weight = weight;
    this->height = height;
    Animal:: numOfAnimals++;
}

Animal::Animal(string name, double height, double weight) {
    this->name = name;
    this->weight = weight;
    this->height = height;
    Animal:: numOfAnimals++;
    cout<<name<<" "<<"created"<<endl;
}

Animal:: Animal() {
    this->name = "";
    this->weight = 0;
    this->height = 0;
    Animal:: numOfAnimals++;
}

Animal::~Animal() {
    cout<<this->name<<" "<<"destroyed"<<endl;
}

void Animal::toString() {
    cout<<this->name<<" "<<this->height<<" "<<this->weight<<endl;
}

class Dog: public Animal {
private:
    string sound = "Woof";
public:
    void makeSound() {
        cout<<this->getName()<<" "<<this->sound<<endl;
    }
    Dog(string, double, double, string);
    Dog(): Animal(){};
};

Dog:: Dog(string name, double height, double weight, string sound) : Animal(name, height, weight) {
    this->sound = sound;
}


int main(int argc, const char * argv[]) {
    Dog* dog = new Dog("Fred", 33.2, 12.9, "Woof");
    dog->toString();

    return 0;
}
