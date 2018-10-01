#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	
	cin>>t;
	while(t--){
		char str[85];
		double w[] = { 12.01, 1.008, 16.00, 14.01 };
		char atomic[] = { "CHON" };
		int count[4] = {};
		
		cin>>str;
		for(int i = 0; str[i]; i++){
			for(int j = 0; j < 4; j++){
				if(str[i] == atomic[j]){
					int num = 0;
					
					for(i++; isdigit(str[i]); i++){
						num *= 10;
						num += str[i] - '0';
					}
					num = ((num > 0) ? num : 1);
					count[j] += num;
					i--;
					break;
				}
			}
		}
		double mass = 0;
		
		for(int i = 0; i < 4; i++)
			mass += w[i] * count[i];
			
		printf("%.3f\n", mass);
	}
	
	return 0;
}

/*

map

*/