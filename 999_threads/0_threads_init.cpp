#include<bits/stdc++.h>
#include<thread>
using namespace std;

// always use c for system programming

void taskA(){

    for(int i = 0 ; i <= 10 ; i++){
        sleep(1) ;
        printf("TaskA: %d\n", i) ;
    }
}

void taskB(){

    for(int i = 0 ; i <= 10 ; i++){
        sleep(1) ;
        printf("TaskB: %d\n", i) ;
    }
}

int main(){

    thread t1(taskA) ;
    thread t2(taskB) ;

    t1.join() ;
    t2.join() ;

    

    return 0;
}