class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        auto cmp = [](pair<int, int> l, pair<int, int> r) {return abs(l.first-l.second) < abs(r.first-r.second);};
        priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(cmp)> pq(cmp);
        for (auto cost : costs)
            pq.emplace(make_pair(cost[0], cost[1]));
        int a = 0, b = 0, size_2 = costs.size()/2, res = 0;
        while ((a < size_2) && (b < size_2)) {
            pair<int, int> p = pq.top();
            pq.pop();
            if (p.first > p.second) {
                ++b;
                res += p.second;
            }
            else{
                ++a;
                res += p.first;
            }
        }
        while (!pq.empty() && a == size_2) {
            pair<int, int> p = pq.top();
            pq.pop();
            res += p.second;
        }
        while (!pq.empty() && b == size_2) {
            pair<int, int> p = pq.top();
            pq.pop();
            res += p.first;
        }
        return res;
    }
};
//nth_element, sort, quickSelect