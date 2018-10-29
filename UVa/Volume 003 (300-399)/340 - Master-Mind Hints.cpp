#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, game = 1;

	while (cin >> n, n) {
		int ans[1000] = {}, tmp[1000] = {};

		cout << "Game " << game++ << ":\n";
		for (int i = 0; i < n; i++) {
			cin >> ans[i];
			tmp[i] = ans[i];
		}

		int guess[1000] = {};
		while (1) {
			int a = 0, b = 0;
			for (int i = 0; i < n; i++) 
				cin >> guess[i];
			if (!guess[0])	break;
			for (int i = 0; i < n; i++) {
				if (ans[i] == guess[i]) {
					a++;
					ans[i] = 0, guess[i] = 0;
				}
			}
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					if (ans[i]) {
						if (ans[i] == guess[j]) {
							b++;
							ans[i] = 0, guess[j] = 0;
							break;
						}
					}
				}
			}
			cout << "    (" << a << "," << b << ")\n";
			for (int i = 0; i < n; i++)
				ans[i] = tmp[i];
		}
	}

	return 0;
}

/*

can be simplified

*/
