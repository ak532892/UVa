#include<bits/stdc++.h>
using namespace std;

int main(){
	double largestVal[10][31];

	for(int i = 0; i < 10; i++)
		for(int j = 1; j < 31; j++)
			largestVal[i][j] = log10(1 - pow(2, -1-i)) + (pow(2, j) - 1)*log10(2);
	
	char buffer[200];

	while(scanf("%s", buffer) != EOF && strlen(buffer) > 3){
		double a = 0;
		int b = 0;
		int acc = 17;

		for(int i = 0; i < acc; i++){
			if(buffer[i] == '.')	continue;
			a = (a * 10 + buffer[i] - '0');
		}
		a /= pow(10, acc-2);

		for(int i = 0; i < strlen(buffer); i++){
			if(buffer[i] == 'e'){
				for(i++; i < strlen(buffer); i++){
					b = (b * 10 + buffer[i] - '0');
				}
			}
		}
		
		int breakflag = 0;

		for(int i = 0; i < 10 && !breakflag; i++){
			for(int j = 1; j < 31 && !breakflag; j++){
				if(floor(largestVal[i][j]) == b){
					if(fabs(pow(10, largestVal[i][j]-b) - a) < 1e-6){
						cout<<i<<" "<<j<<endl;
						breakflag = 1;
					}
				}
			}
		}
	}
	return 0;
}

/*

float point, math, log
'e' = ' '; sscanf, string processing

*/