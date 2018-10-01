#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;

	while(cin>>n){
		int arr[1005];
		for(int i = 0; i < n; i++)
			cin>>arr[i];

		int m = 0;
		for(int i = 0; i < (n - 1); i++){
			for(int j = 0; j < (n - i - 1); j++){
				if(arr[j] > arr[j+1]){
					swap(arr[j], arr[j+1]);
					m++;
				}
			}
		}
		cout<<"Minimum exchange operations : "<<m<<endl;
	}

	return 0;
}

/*

swap is not necessary

*/