#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	
	cin>>t;
	while(t--){
		int dp[10005][10] = {};
		
		for(int i = 1; i < 10005; i++){
			for(int j = 0; j < 10; j++)
				dp[i][j] = dp[i-1][j];
			int tmp = i;
			
			while(tmp){
				dp[i][tmp%10]++; 
				tmp /= 10;
			}
		}
		
		int n;

		cin>>n;
		cout<<dp[n][0];
		for(int i = 1; i < 10; i++)
			cout<<" "<<dp[n][i];
		cout<<endl;
	}
	
	return 0;
}

/*

or digit to string
memcpy

*/