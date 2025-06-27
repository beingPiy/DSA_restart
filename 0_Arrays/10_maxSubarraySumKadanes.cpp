#include<bits/stdc++.h>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int t ;
	cin >> t ;

	while(t--){
		int n ;
		cin >> n ;
		int a[n] ;
		for(int i = 0 ; i < n ; i++){
			cin >> a[i] ;
		}

		int maxSum = 0 ;
		int sum = 0 ;

        for(int i = 0 ; i < n ; i++){
			sum += a[i] ;
            if(sum > maxSum){
				maxSum = sum ;
			}
			if(sum < 0){
				sum = 0 ;
			}
        }

		cout << maxSum << endl ;
	}

    return 0;
}