#include <iostream>
using namespace std;
int main() {
    
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n = 10 ; 

    int A[n] = {12, 34, 56, 67, 87, 34, 23, 56 ,65, 45} ;


    // Bubble sort
     for(int i = 0 ; i < n ; i++){

        // Pairwise comparison and swapping
        for(int j = 0 ; j < n-i-1 ; j++){
            if( A[j] > A[j+1]){
                swap(A[j], A[j+1]) ;
            }
        }
    } 

    for(int i = 0 ; i < n ; i++){
        cout << A[i] << " ";
    }  

}
