#include <iostream>
using namespace std;

int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    // initialization of array
    int a[10] ;

    // updating array values
    for (int i = 0 ; i < 10 ; i++){
        cin >> a[i] ;
    }

    // reading array values
    for(int i = 0 ; i <10 ; i++){
        cout << a[i] << '\n';
    }

    // sizeof function
    cout << sizeof(a) << '\n';

    // calculating number of items in array
    cout << sizeof(a)/sizeof(int) ;


    return 0 ;
}
