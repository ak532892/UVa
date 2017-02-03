#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	
	cin>>n;
	for(int l = 0; l < n; l++){
		if(l)	cout<<endl;
		char str[85];
		
		cin>>str;
		int i, len = strlen(str);
		for(i = 1; i <= len / 2; i++){
			int j, flag = 1;
			
			for(j = i; (j < len) && flag; j += i){
				for(int k = 0; (k < i) && flag; k++){
					if(str[k] != str[j+k])
						flag = 0;
				}
			}
			if((j == len) && flag){
				cout<<i<<endl;
				break;
			}
		}	
		if(i == (len / 2 + 1))
			cout<<len<<endl;
	}
	return 0;
}

/*

KMP

*/