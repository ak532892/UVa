#include <bits/stdc++.h>
using namespace std;

void count (char *str, int *num){
	for(int i = 0; i < strlen(str); i++)
		num[str[i]]++;
}
int main() {
	char str1[105], str2[105];
	
	while(cin>>str1>>str2){
		const int SIZE = 200;
		int cnt1[SIZE] = {}, cnt2[SIZE] = {};
		
		count(str1, cnt1);
		count(str2, cnt2);
		sort(cnt1, cnt1 + SIZE);
		sort(cnt2, cnt2 + SIZE);

		int i;
		for(i = 0; i < SIZE; i++){
			if(cnt1[i] != cnt2[i])
				break;
		}

		puts(i == SIZE ? "YES" : "NO");
	}

	return 0;
}

/*

no need to sort

*/