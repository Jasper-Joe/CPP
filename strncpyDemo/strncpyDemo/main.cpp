//
//  main.cpp
//  strncpyDemo
//
//  Created by Jinglun Zhou on 2021/6/23.
//

#include <iostream>
using namespace::std;
int main(int argc, const char * argv[]) {
    // insert code here...
    char src[40];
    char dest[12];
    memset(dest, '\0', 10);
    strcpy(src, "This is a testing message");
    strncpy(dest, src, 10);
    cout<<dest<<endl; // This is a 
    return 0;
}
