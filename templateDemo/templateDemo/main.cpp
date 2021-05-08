//
//  main.cpp
//  templateDemo
//
//  Created by Jinglun Zhou on 2021/5/7.
//

#include <iostream>
#include <string>
using namespace std;

template <typename T>

void print(T value) {
    cout << value << endl;
}


int main(int argc, const char * argv[]) {
    print(5);
    print("Hello");
    print(5.5);

    return 0;
}
