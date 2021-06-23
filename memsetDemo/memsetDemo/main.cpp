//
//  main.cpp
//  memsetDemo
//
//  Created by Jinglun Zhou on 2021/6/23.
//

#include <iostream>
using namespace::std;
int main(int argc, const char * argv[]) {
    char str[50];
    strcpy(str, "This is string.h library function");
    memset(str, '$', 7);
    cout<<str<<endl;
    return 0;
}
