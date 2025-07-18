// C++ Standard Template Library - String Class
#include<bits/stdc++.h>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    // String Initialization - Operator Overloading
    string s0 ;
    string s1("Hello") ;
    string s2 = "Hello" ;
    string s3(s2) ;
    string s4 = s3 ;
    char a[] = {'H', 'e', 'l', 'l', 'o', '\0'} ;
    string s5 = a ;

    cout << s0 << "\n" << s1 << "\n" << s2 << "\n" << s3 << "\n" << s4 << "\n" << s5 << "\n" ;

    // String Functions

    // Check if empty
    if(s0.empty()){
        cout << "s0 is empty \n" ;
    }

    //Append
    s0.append("I love DSA") ;
    cout << s0 << "\n" ;

    s0 += " and Software Development" ;
    cout << s0 << "\n" ;

    // removing the contents
    cout << s0.length() << "\n" ;
    s0.clear() ;
    cout << s0.length() << "\n" ;

    // comparison of string
    s0 = "Apple" ;
    s1 = "Mango" ;

    cout << s0.compare(s1) << "\n" ;

    if(s0 > s1){
        cout << s0 << " is greater than " << s1 << "\n" ;
    }
    else {
        cout << s1 << " is greater than " << s0 << "\n" ;
    }

    // Find a substring 
    string s = "I will visit Noida soon" ;
    int idx = s.find("Noida") ;
    cout << idx << "\n" ;

    // Remove a substring
    string rem = "Noida" ;
    int len = rem.length() ;
    s.erase(idx, len+1) ;
    cout << s << "\n";

    // Iterator
    for(auto it = s.begin() ; it != s.end() ; it++){
        cout << (*it) ; 
    }
    cout << endl ;
    
    // for each loop
    for(auto c : s){
        cout << c ;
    }
    cout << endl ;


    return 0;
}