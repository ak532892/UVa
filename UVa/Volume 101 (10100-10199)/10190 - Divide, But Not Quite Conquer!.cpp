#include<bits/stdc++.h>
using namespace std;
 
int main() {
	int n, m;
 
	while (cin >> n >> m) {
		int arr[100] = {}, c = 0;
 
		while (m && n) {
			if (((n / m) < n) && !(n%m)) {
				arr[c++] = n;
				n /= m;
			}
			else
				break;
		}
 
		if ((n == 1) && c) {
			arr[c++] = 1;
			for (int i = 0; i < c; i++) {
				if (!i)
					cout << arr[i];
				else
					cout << " " << arr[i];
			}
			cout << endl;
		}
		else
			cout << "Boring!" << endl;
	}
	return 0;
}