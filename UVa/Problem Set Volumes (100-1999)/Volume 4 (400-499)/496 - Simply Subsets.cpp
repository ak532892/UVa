#include<bits/stdc++.h>
using namespace std;

int subset(set<int> a, set<int> b, int disjoint) {
	int find = 1;

	for (auto it = b.begin(); it != b.end(); *it++)
		find &= (disjoint-a.count(*it));

	return find;
}
int main() {
	string s;

	while (getline(cin, s)) {
		stringstream sin;
		int n;
		set<int> set1, set2;

		sin << s;
		while (sin >> n) 
			set1.insert(n);

		sin.clear();
		getline(cin, s);
		sin << s;
		while (sin >> n)
			set2.insert(n);
		
		if (set1 == set2) {
			puts("A equals B");
			continue;
		}
		if (set1.size() > set2.size()) {
			if (subset(set1, set2, 0)) {
				puts("B is a proper subset of A");
				continue;
			}
		}
		if (set1.size() < set2.size()) {
			if (subset(set2, set1, 0)) {
				puts("A is a proper subset of B");
				continue;
			}
		}
		if (subset(set1, set2, 1)) {
			puts("A and B are disjoint");
			continue;
		}
		puts("I'm confused!");
	}

	return 0;
}

/*

set_intersection
binary_search

*/