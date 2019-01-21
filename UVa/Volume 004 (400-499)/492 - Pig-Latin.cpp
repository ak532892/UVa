#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
	
	while(getline(cin, str)){
		for(int i = 0; i < str.size(); i++){
			if(isalpha(str[i])){
				if(str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' ||
				   str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' ||
				   str[i] == 'u' || str[i] == 'U'){
					while((str[i] != ' ') && (i < str.size()) && isalpha(str[i]))
						cout<<str[i++];
				}
				else{
					char c = str[i++];
					while((str[i] != ' ') && (i < str.size()) && isalpha(str[i]))
						cout<<str[i++];
					cout<<c;
				}
				cout<<"ay";
				i--;
			}
			else cout<<str[i];
		}
		cout<<endl;
	}

	return 0;
}

// stack