#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b;

	while(cin>>a>>b){
		int quo[6005] = {}, rem[6005] = {};
		int cycpos, cyclen;
		int breakflag = 0;

		cout<<a<<"/"<<b<<" = "<<a/b<<".";
		a %= b;
		a *= 10;
		for(int i = 0; i < 6005;){
			quo[i] = a / b;
			rem[i++] = a;

			a %= b;
			a *= 10;

			int *p = find(rem, rem + i - 1, rem[i-1]);
			if(p != (rem + i - 1)){
				cycpos = (p - rem);
				cyclen = (i - 1) - cycpos;
				breakflag = 1;
				break;
			}
			if(breakflag)	break;
		}

		int i;
		for(i = 0; i < 50; i++){
			if(i == cycpos)
				cout<<"(";
			cout<<quo[i];
			if(i == (cycpos + cyclen - 1)){
				cout<<")";
				break;
			}
		}
		if(i == 50)	cout<<"...)";
		cout<<"\n   "<<cyclen<<" = number of digits in repeating cycle\n\n";
	}

	return 0;
}

/*

***Output require two blank line**
boolean array check repeat

*/