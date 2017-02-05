#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;

	cin>>t;
	while(t--){
		int m, n;

		cin>>m>>n;

		char dnaSeq[55][1005];
		for(int i = 0; i < m; i++)
			cin>>dnaSeq[i];
		
		char dna[] = "ACGT";
		int dis = 0;
		for(int i = 0; i < n; i++){
			int min = m;
			char minD;

			for(int k = 0; k < 4; k++){
				int tmp = 0;
				for(int j = 0; j < m; j++){
					if(dnaSeq[j][i] != dna[k])
						tmp++;
				}
				if(tmp < min)
					min = tmp, minD = dna[k];
			}
			cout<<minD;
			dis += min;
		}
		cout<<endl<<dis<<endl;
	}

	return 0;
}

/*



*/