#include<bits/stdc++.h>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int a[] = { 1, 3, 5, 7, 10 , 11, 12 , 13} ;
    int target = 16 ;

    int i = 0 ; 
    int j = sizeof(a)/sizeof(int)-1 ;

    while(i < j){
        if((a[i] + a[j]) < target){
            i++ ;
        }
        else if((a[i] + a[j]) > target){
            j-- ;
        }
        else {
            cout << a[i] << " + " << a[j] << " = " << target << endl;
            // careful with while loops and recursion 
            i++ ;
            j-- ;
        }
    }
    

    return 0;
}