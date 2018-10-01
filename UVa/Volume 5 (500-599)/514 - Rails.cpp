#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;

	while(cin>>n, n){
		int line[1005];

		while(cin>>line[0], line[0]){
			for(int i = 1; i < n; i++)
				cin>>line[i];

			stack<int> sta;
			int j = 0;

			for(int i = 0; i < n; i++){
				if((i+1) != line[j])
					sta.push(i+1);
				else{
					j++;
					if(sta.size() && (line[j] < sta.top()))
						break;
					while(sta.size() && (line[j] == sta.top())){
						sta.pop();
						j++;
					}
				}
			}
			puts(j == n ? "Yes" : "No");
		}
		puts("");
	}

	return 0;
}

/*



*/