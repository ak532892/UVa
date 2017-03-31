#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;

	cin >> n;
	for(int i = 0; i < n; i++){
		if(i) puts("");

		int arr1[5000] = {};
		string arr2[5000];
		int size = 0;
		char c;

		while (cin>>arr1[size++]) {
			c = getchar();
			if (c == '\n') break;
		}
		
		for(int i = 0; i < size; i++)
			cin >> arr2[arr1[i]-1];
		for (int i = 0; i < size; i++)
			cout << arr2[i] << endl;
	}
	
	return 0;
}

/*

stringstream 

*/