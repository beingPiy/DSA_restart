#include <iostream>
using namespace std;
int main() {
    
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n = 10 ;
    int A[n] = {10, 12 , 34 , 65, 7, 5, 23 , 132, 34 , 54} ;

    // Selection Sort

    for(int i = 0 ; i < n ; i++){
    // 0 to i-1 sorted and i to n sorted
        int smallest_idx ;
        smallest_idx = i ;
        for(int j = i+1 ; j < n ; j++){
            // bring smallest element in correct position
            if(A[j] < A[smallest_idx]){
                smallest_idx = j ;
            }
        }
        swap(A[i] , A[smallest_idx]) ;
       
    }


    for(int i = 0 ; i < n ; i++){
        cout << A[i] << " " ;
    }
}
