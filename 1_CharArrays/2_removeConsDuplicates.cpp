#include<bits/stdc++.h>
using namespace std;

void removeConsecutiveDuplicates(char s[], int l){
    if(l < 2){
        return ;
    }

    // two pointers
    int updater = 0 ;
    int checker = 1 ;

    while(checker < l){
        // move checker if similar char
        if(s[checker] == s[updater]){
            checker++ ;
        }

        // update if different
        else if(s[checker] != s[updater]){
            updater++ ;
            s[updater] = s[checker] ;
            checker++ ;
        }
    }
    // when all comparisons are complete
    // increment updater and finish
    s[updater+1] = '\0' ;

    return ;
}


int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    char s[1000] ;
    cin.getline(s, 1000) ;

    removeConsecutiveDuplicates(s, strlen(s)) ;

    cout << s ;

    return 0;
}