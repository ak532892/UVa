#include<bits/stdc++.h>

using namespace std;
int main(){
	int r, c, n = 0;

	while(cin>>r && r){
		cin>>c;
		
		char puzzle[15][15] = {};
		int puzzleNum[15][15] = {};
		
		cin.ignore();
		for(int i = 0; i < r; i++)
			gets(puzzle[i]);
		
		int num = 1;
		for(int i = 0; i < r; i++){
			for(int j = 0; j < c; j++){
				if(puzzle[i][j] == '*')	continue;
				if(((j-1) < 0) || ((i-1) < 0))
					puzzleNum[i][j] = num++;
				else if((puzzle[i][j-1] == '*') || (puzzle[i-1][j] == '*'))
					puzzleNum[i][j] = num++;
			}
		}
		
		if(n)	puts("");
		cout<<"puzzle #"<<++n<<":\n";
		cout<<"Across\n";
		for(int i = 0; i < r; i++){
			for(int j = 0; j < c; j++){
				if(puzzle[i][j] != '*'){
					printf("%3d", puzzleNum[i][j]);
					cout<<"."<<puzzle[i][j];
					for(j++; (j < c) && (puzzle[i][j] != '*'); j++)
						cout<<puzzle[i][j];
					cout<<endl;
					j--;
				}
			}
		}
		cout<<"Down\n";
		for(int i = 0; i < r; i++){
			for(int j = 0, k; j < c; j++){
				if((puzzle[i][j] != '*') && puzzleNum[i][j]){
					printf("%3d", puzzleNum[i][j]);
					cout<<"."<<puzzle[i][j];
					k = i;
					for(k++; (k < r) && (puzzle[k][j] != '*'); k++){
						cout<<puzzle[k][j];
						puzzleNum[k][j] = 0;
					}
					cout<<endl;
				}
			}
		}
	}
	
	return 0;
}

/*



*/