#include<iostream>
#include<vector>
#include<thread>

using namespace std;

int main(){
    auto lambda=[](int x){    // lambda is just the name , here not a keyword
        cout<<"Hi from thread :"<<this_thread::get_id()<<endl;
        cout<<"Arg value here is "<<x <<endl;
    };
    vector<thread> threads; 
    for(int i=0;i<10;i++){
        threads.push_back(thread(lambda,i)); 
        // can't write join() statement here , otherwise 1st thread will complete 10 iterations before other threads are called
    }
    for(int i=0;i<10;i++){
        threads[i].join();
    }
    
    cout<<"Inside main thread";
    return 0;
}