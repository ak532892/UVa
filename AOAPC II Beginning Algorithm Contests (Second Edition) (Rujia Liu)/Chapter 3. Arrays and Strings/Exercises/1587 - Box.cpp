#include <bits/stdc++.h>
using namespace std;

struct pallet{
	int w, h;
};
int cmp(struct pallet a, struct pallet b){
	if (a.w == b.w)
		return a.h < b.h;
	return a.w < b.w;
}
int main(){
	int w, h;

	while(cin>>w>>h){
		struct pallet p[6];
		int seq[12];

		if(w > h)	swap(w, h);
		seq[0] = p[0].w = w, seq[1] = p[0].h = h;

		for(int i = 1; i < 6; i++){
			cin>>w>>h;
			if(w > h)	swap(w, h);
			seq[2*i] = p[i].w = w, seq[2*i + 1] = p[i].h = h;
		}

		sort(seq, seq + 12);
		
		int imp = 0, dup[3];
		for(int i = 0; i < 3; i++){
			for(int j = 1; j < 4; j++){
				if(seq[i*4] != seq[i*4 + j])
					imp = 1;
			}
			dup[i] = seq[i*4];
		}

		if(imp){
			cout<<"IMPOSSIBLE\n";
			continue;
		}

		sort(p, p + 6, cmp);

		if( p[0].w != dup[0] || p[0].h != dup[1] ||
			p[1].w != dup[0] || p[1].h != dup[1] || 
			p[2].w != dup[0] || p[2].h != dup[2] ||
			p[3].w != dup[0] || p[3].h != dup[2] || 
			p[4].w != dup[1] || p[4].h != dup[2] ||
			p[5].w != dup[1] || p[5].h != dup[2] ){
			cout<<"IMPOSSIBLE\n";
			continue;
		}
		cout<<"POSSIBLE\n";
	}

	return 0;
}

/*

struct implement, utility pair, memcmp 

*/