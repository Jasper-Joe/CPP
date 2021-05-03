//
//  main.cpp
//  threadDemo
//
//  Created by Jinglun Zhou on 2021/5/3.
//

#include <iostream>
#include <thread>
using namespace std;
void func() {
    cout << "Beauty is only skin-deep" << endl;
}
int main(int argc, const char * argv[]) {
    thread t1(func);
    thread t2(func);
    t1.join(); // main thread waits for t1 to finish
    //t1.detach(); // t1 will freely on its own -- daemon process
    t2.join();

    return 0;
}
