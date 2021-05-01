//
//  main.cpp
//  ENUMSDemo
//
//  Created by Jinglun Zhou on 2021/4/30.
//

#include <iostream>
using namespace std;
enum Example {
    A, B, C
};

int main(int argc, const char * argv[]) {
    // insert code here...
    Example value = C;
    cout<<value<<endl; // value = 2
    return 0;
}
