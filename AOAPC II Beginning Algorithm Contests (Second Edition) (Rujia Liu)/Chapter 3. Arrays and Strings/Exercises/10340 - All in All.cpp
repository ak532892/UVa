#include <bits/stdc++.h>
using namespace std;

int main(){
	char s[100000], t[100000];

	while(cin>>s>>t){
		int slen = strlen(s), tlen = strlen(t);

		if( slen > tlen){
			cout<<"No"<<endl;
			continue;
		}

		int i, start = 0, pre = 0;
		for(i = 0; i < slen; i++){
			char *p = find(t + start, t + tlen, s[i]);
			
			if(p != (t + tlen)){
				start = p - (t + start) + 1 + pre;
				pre = start;
			}
			else{
				cout<<"No"<<endl;
				break;
			}
		}
		if(i == slen)	
			cout<<"Yes"<<endl;
	}

	return 0;
}

/*



*/