#include<bits/stdc++.h>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    char s[1000] ;
    int n ;
    cin >> n ;
    cin.get() ; // fetch the new line

    // var for comparison and updation
    int maxLen = 0 ;
    char maxStr[1000] ;


    // loop for finding largest string
    for(int i = 0 ; i < n ; i++){
        cin.getline(s, 1000);

        if(strlen(s) > maxLen){
            maxLen = strlen(s) ;
            
            // copying string
            strcpy(maxStr, s) ;
        }
    }

    cout << maxStr << " " << maxLen ;

    return 0;
}