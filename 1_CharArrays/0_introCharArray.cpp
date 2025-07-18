#include<bits/stdc++.h>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    // Operator Overloading for char arrays
    int b[] = {1, 2, 3} ;
    char c[] = {'a' , 'b' , 'c', '\0' } ; // always use null character

    cout << b << "\n" << c << "\n";
    //Output - 0x7fffffffcf08, abc

    
    
    // Input in character array
    char s1[] = {'h', 'e', 'l', 'l' , 'o', '\0'} ;
    char s2[] = "hello" ;
    char s3[10] ; // never initialize array without size
    cin >> s3 ;
    
    cout << s1 << " " << sizeof(s1) << "\n" ;
    cout << s2 << " " << sizeof(s2) << "\n" ;
    cout << s3 ;


    return 0;
}