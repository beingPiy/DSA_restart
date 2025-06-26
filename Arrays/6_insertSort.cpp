#include <iostream>
using namespace std;
int main() {
    
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n = 10 ; 

    int A[n] = {12, 34, 5465, 46, 12 , 687 ,235 , 5,87, 79} ;

    //Insertion Sort
    for(int i = 1 ; i < n ; i++){
        // place current element in right position in sorted array
        int e = A[i] ;

        // create space in sorted array
        int j = i-1 ;
        // move forward if greater than current element
        // stop only if encountered a smaller number
        while (j >= 0 && A[j] > e){
            A[j+1] = A[j] ;
            j-- ;
        }
        A[j+1] = e ;
    }


    for(int i = 0 ; i < n ; i++){
        cout << A[i] << " " ;
    }
}
