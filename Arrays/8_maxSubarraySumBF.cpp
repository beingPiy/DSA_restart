#include<bits/stdc++.h>
using namespace std ;

int main() {

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

		int largestSum = INT_MIN ;
		for(int i = 0 ; i < n ;  i++){
			for(int j = i ; j < n ; j++){
			int subarraySum = 0 ;
				for(int k = i ; k <= j ; k++){
					subarraySum += a[k] ;
				}
				if(subarraySum > largestSum){
					largestSum = subarraySum ;
				}
			}
		}

		cout << largestSum << endl ;
	}

	return 0;
}