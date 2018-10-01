#include<bits/stdc++.h>
using namespace std;

int main(){
	char bottom[105], top[105];
	
	while(cin>>bottom>>top){
		int botlen = strlen(bottom), toplen = strlen(top);
		int Min = (botlen + toplen);
		char expendbottom[400];

		memset(expendbottom, '0', 400);

		for(int i = 0; i < botlen; i++)
			expendbottom[toplen - 1 + i] = bottom[i];

		for(int i = 0; i < (botlen + toplen); i++){
			int j, repeat = 0;
			for(j = 0; j < toplen; j++){
				if((top[j] == expendbottom[j+i]) && (top[j] == '2'))
					break;
				if(expendbottom[j+i] != '0')
					repeat++;
			}
			if(j == toplen){
				int len = (botlen + toplen - repeat);
				Min = len < Min ? len : Min;
			}
		}
		cout<<Min<<endl;
	}

	return 0;
}

/*

char to int to evaluate status

*/