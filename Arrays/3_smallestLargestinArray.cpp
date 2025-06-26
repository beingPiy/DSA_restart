#include <bits/stdc++.h>

using namespace std;
int main() {
    
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n = 10 ;
    // Array
    int A[n] = {10, 20 , 30 , 40 , 50 , 12 , 15, 78, 89 , 95} ;

    // largest and smallest

    //numbers to compare
    int largest = INT_MIN ;
    int smallest = INT_MAX ;

    for(int i = 0 ; i < n ; i++){
        
        // if larger than largest then make it new largest
        if(A[i] > largest){
            largest = A[i] ;
        }

        // if smaller than smallest then make it new smallest
        if(A[i] < smallest){
            smallest = A[i] ;
        }
        
    }

    cout << smallest << '\n' << largest ;
}
