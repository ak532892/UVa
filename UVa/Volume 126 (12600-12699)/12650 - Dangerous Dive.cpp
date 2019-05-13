#include<iostream>
using namespace std;
int main () {
	int n, R;
 
	while (cin>>n>>R) {
		bool p[10001] = {};
		for (int i = 0; i < R; ++i) {
			int r;
			cin>>r;
			p[r] = 1;
		}
		if (n == R)	{
			puts("*");
			continue;
		}
		for (int i = 1; i <= n; ++i)
			if (!p[i]) cout<<i<<" ";
		puts("");
	}
}