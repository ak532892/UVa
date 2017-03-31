#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;

	while (cin >> n) {
		int arr[3005] = {};
		int differ[3005] = {};
		int jolly = 1;

		cin >> arr[0];
		for (int i = 1; i < n; i++) {
			cin >> arr[i];

			int diff = abs(arr[i] - arr[i - 1]);

			if (diff <= (n - 1))
				differ[diff]++;
			else
				jolly = 0;
		}
		for (int i = 1; (i < n) && jolly; i++) {
			if (!differ[i])
				jolly = 0;
		}
		puts(jolly ? "Jolly" : "Not jolly");
	}

	return 0;
}

/*

check repeat to speed up

*/