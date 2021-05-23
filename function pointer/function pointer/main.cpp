//
//  main.cpp
//  function pointer
//
//  Created by Jinglun Zhou on 2021/5/22.
//

#include <iostream>
#include <vector>
using namespace std;

void printValue(int value) {
    cout << "Value: " << value << endl;
}

void forEach(vector<int>& values, void(*func)(int)) {
    for (int value : values) {
        func(value);
    }
}
int main(int argc, const char * argv[]) {
    // insert code here...
    vector<int> values{1, 5, 4, 2, 3};
    forEach(values, printValue);
    return 0;
}
