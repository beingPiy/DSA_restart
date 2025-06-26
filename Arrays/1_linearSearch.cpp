#include<iostream>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    // initialization of array
    int A[10] = {5, 1,2, 4, 5, 234, 2,3 , 2, 6};

    // element to be searched
    int k = 5 ;
    int flag = 0 ;

    // Linear Search Algo
    for(int i = 0 ; i < 10 ; i++){
        // search condition
        if(A[i] == k){
            cout << "Found at - " << i << '\n';
            flag = 1 ;
        }
    }
    
    if(flag == 0){
        cout << "Not Found" ;
    }

    return 0;
}