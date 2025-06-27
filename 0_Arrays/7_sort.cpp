#include <bits/stdc++.h>
using namespace std;

// create a compare function to pass
bool compare(int a , int b){
    // logic for comparison - first should be greater than second
    return a > b ;
}


int main() {
    
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n = 10 ;

    int A[n] = {12, 12, 43, 45,  76, 32, 65, 76 , 43 ,54} ;

    // inbuilt sort
    sort(A, A+n, compare) ;

    for(int i = 0 ; i < n ; i++){
        cout << A[i] << " ";

    }
}
