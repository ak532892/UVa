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
	struct pallet p[6];

	while(cin>>p[0].w>>p[0].h){
		if(p[0].w > p[0].h)	swap(p[0].w, p[0].h);

		for(int i = 1; i < 6; i++){
			cin>>p[i].w>>p[i].h;
			if(p[i].w > p[i].h)	
				swap(p[i].w, p[i].h);
		}

		sort(p, p + 6, cmp);
		int dup[3];

		dup[0] = p[0].w;
		dup[1] = p[0].h;
		dup[2] = p[2].h;

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