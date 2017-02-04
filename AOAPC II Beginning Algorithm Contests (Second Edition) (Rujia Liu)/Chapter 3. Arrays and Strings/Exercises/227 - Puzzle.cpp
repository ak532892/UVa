#include <bits/stdc++.h>
using namespace std;

int main() {
	int n = 0;
	char puzzle[10][10] = {};
	

	while(1){
		int bi, bj;

		for(int i = 0 ; i < 5; i++){
			cin.getline(puzzle[i], 6);
			if(puzzle[0][0] == 'Z')	return 0;
		}
		
		if(n)	cout<<endl;
		
		for(int i = 0; i < 5; i++){
			for(int j = 0; j < 5; j++){
				if(puzzle[i][j] == ' '){
					bi = i, bj = j;
				}
			}
		}
		
		char cmd = '\0';
		int conflag = 1;
		
		cout<<"Puzzle #"<<++n<<":\n";

		while(cmd != '0'){
			cmd = getchar();
			
			if(conflag){
				if(cmd == 'A'){
					if((bi-1) >= 0){
						swap(puzzle[bi][bj], puzzle[bi-1][bj]);
						bi--;
					}
					else{
						cout<<"This puzzle has no final configuration.\n";	
						conflag = 0;
					}
				}
				else if(cmd == 'B'){
					if((bi+1) <= 4){
						swap(puzzle[bi][bj], puzzle[bi+1][bj]);
						bi++;
					}
					else{
						cout<<"This puzzle has no final configuration.\n";	
						conflag = 0;
					}
				}
				else if(cmd == 'R'){
					if((bj+1) <= 4){
						swap(puzzle[bi][bj], puzzle[bi][bj+1]);
						bj++;
					}
					else{
						cout<<"This puzzle has no final configuration.\n";	
						conflag = 0;
					}
				}
				else if(cmd == 'L'){
					if((bj-1) >= 0){
						swap(puzzle[bi][bj], puzzle[bi][bj-1]);
						bj--;
					}
					else{
						cout<<"This puzzle has no final configuration.\n";	
						conflag = 0;
					}
				}
			}
		}
		
		if(conflag){
			for(int i = 0; i < 5; i++){
				for(int j = 0; j < 5; j++){
					if(j == 0)
						cout<<puzzle[i][j];
					else
						cout<<" "<<puzzle[i][j];
				}
				cout<<endl;
			}
		}
		cin.ignore(1024, '\n');
	}
	return 0;
}

/*

map
or gets

*/
