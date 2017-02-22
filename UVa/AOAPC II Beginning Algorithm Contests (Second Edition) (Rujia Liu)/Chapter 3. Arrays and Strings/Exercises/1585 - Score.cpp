#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	
	cin>>t;
	while(t--){
		char str[85];
		int ans = 0;
		
		cin>>str;
		for(int i = 0; i < strlen(str); i++){
			int add = 0;
			
			for(; str[i] == 'O'; i++){
				add++;
				ans += add;
			}
		}
		cout<<ans<<endl;
	}
	
	return 0;
}

/*

dp

*/