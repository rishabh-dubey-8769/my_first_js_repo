#include<bits/stdc++.h>
// #include<iostream>
// #include<thread>
// #include<chrono>
using namespace std;
void task1(){
    for(int i=0;i<5;i++){
        std::this_thread::sleep_for(std::chrono::milliseconds(1));
        cout<<(char)('a'+i)<<endl;
    }
}
void task2(){
    for(int i=0;i<5;i++){
        std::this_thread::sleep_for(std::chrono::milliseconds(1));
        cout<<(char)('A'+i)<<endl;
    }
}
using namespace std;
int main(){
    thread t1(task1);
    thread t2(task2);
    //compile using online codechef compiler platform.but one thing, replace '_sleep' with 'usleep';
    t1.join();
    t2.join();
    return 0;
}