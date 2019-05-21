class Solution {
public:
	int lastStoneWeight(vector<int>& stones) {
		priority_queue<int> pq;
		for (auto i : stones)
			pq.emplace(i);
        
        while (pq.size() >= 2) {
            int y = pq.top();
            pq.pop();
            int x = pq.top();
            pq.pop();
            if (x != y)
                pq.emplace(y-x);
        }
        return pq.size() ? pq.top() : 0;
    }
};
//multiset, partial_sort