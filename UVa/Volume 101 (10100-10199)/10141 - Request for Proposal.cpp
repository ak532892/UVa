#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, p, casee = 0;
	
	while (cin>>n>>p && n && p) {
		cin.ignore();
		if (casee)	puts("");
		string tmp;
		for (int i = 0; i < n; ++i)
			getline(cin, tmp);
		vector<pair<pair<string, double>, int>> vendor(1);
		string res;
		double prices;
		int t;
		for (int i = 0; i < p; ++i) {
			getline(cin, tmp);
			cin>>prices>>t;
			cin.ignore();
			if (i == 0) {
				res = tmp;
				vendor[0] = (make_pair(make_pair(res, prices), t));
			}
			else if (t > vendor[0].second){
				res = tmp;
				vendor[0] = (make_pair(make_pair(res, prices), t));
			}
			else if (t == vendor[0].second) {
				if (prices < vendor[0].first.second ) {
					res = tmp;
					vendor[0] = (make_pair(make_pair(res, prices), t));
				}
			}
			while (t--)	getline(cin, tmp);
		}
		cout<<"RFP #"<<++casee<<endl;
		cout<<res<<endl;
	}
}
// getchar()