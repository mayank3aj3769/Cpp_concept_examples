#include<iostream>
#include<conio.h>
#include<thread>

using namespace std;

int main(){
    auto lam=[](int x){
        cout<<"Hi from thread"<<endl;
        cout<<"Arg value here is "<<x <<endl;
    };
    thread mythread(lam,100); //lambda function with name lam
    mythread.join(); // waits for my thread to be over , if you remove this , both would work simultaneously
    cout<<"Inside main thread";
    return 0;
}