#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n--){
		char c;
		int sum = 0;
		for(int i = 0; i < 16; i++){
			cin>>c;
			if(i%2)	sum += c-'0';
			else sum += (c-'0')*2/10 + (c-'0')*2%10;
		}
		sum%10 ? puts("Invalid") : puts("Valid");
	}
}