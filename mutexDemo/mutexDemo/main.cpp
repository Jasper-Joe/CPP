//
//  main.cpp
//  mutexDemo
//
//  Created by Jinglun Zhou on 2021/5/3.
//

#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

mutex mu;

void shared_print(const string& msg, int id) {
    mu.lock();
    cout << msg << id << endl;
    mu.unlock();
}

void func() {
    for (int i = 0; i > -100; i--) {
        shared_print("From t1 ", i);
    }
}

int main(int argc, const char * argv[]) {
    thread t1(func);
    
    for (int i = 0; i < 100; i++) {
        shared_print("From main ", i);
    }
    
    t1.join();

    return 0;
}
