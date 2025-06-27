#include<iostream>
using namespace std;

int binarySearch(int A[] , int s, int e , int k){

    // the middle part comparison will decide the trajectory
    int mid = (s+e)/2 ;

    if(s <= e){

        // base condition
        if(A[mid] == k){
            return mid ;
        }
        else if(A[mid] > k){
            e = mid - 1 ;
            return binarySearch(A , s , e , k) ;
        }
        else {
            s = mid + 1 ;
            return binarySearch(A , s , e , k) ;
        }

    }
    // exit condition
    return -1 ;
}

int main(){
    
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n = 10 ;
    // Array must be sorted for binary search
    int A[n] = {10, 20 , 30 , 40 , 50 , 60 , 70, 78, 89 , 95} ;

    int k ;
    cin >> k ;

    // Parameters for binary search - Array, starting index, end index, target value
    cout << binarySearch(A,0, n-1 , k) ;

    return 0;
}