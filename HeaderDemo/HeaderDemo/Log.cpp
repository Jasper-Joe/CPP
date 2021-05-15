//
//  Log.cpp
//  HeaderDemo
//
//  Created by Jinglun Zhou on 2021/5/14.
//

#include "Log.hpp"
#include <iostream>
using namespace std;

void Log(const char* message) {
    cout<<message<<endl;
}

void InitLog() {
    Log("Initializing Log");
}
