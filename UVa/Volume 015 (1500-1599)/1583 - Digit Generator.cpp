#include<bits/stdc++.h>
using namespace std;
int main() {
	map<int, int> Map;
		
	for (int i = 1; i <= 100000; i++) {
		int t = i, sum = t;
		while (t) {
			sum += t % 10;
			t /= 10;
		}
		if(Map.find(sum) == Map.end())
			Map[sum] = i;
	}

	int t;
	cin >> t;

	while (t--) {
		int n;

		cin >> n;
		printf("%d\n", Map.find(n) == Map.end() ? 0 : Map[n]);
	}
	
	return 0;
}

/*

expand

*/