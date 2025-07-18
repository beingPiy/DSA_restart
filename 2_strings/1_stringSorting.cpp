#include<bits/stdc++.h>
using namespace std;

bool compare(string a , string b){
    return a.length() < b.length()  ;
}

int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    string s[100] ;

    int n ;
    cin >> n ;
    cin.get() ; // fetch new line 

    for(int i = 0 ; i < n ; i++){
        // specifically for string
        getline(cin,s[i]) ;
    }

    // Sorting the string array
    sort(s, s+n, compare) ;


    for(int i = 0 ; i < n ; i++){
        cout << s[i] << "\n";
    }

    return 0;
}