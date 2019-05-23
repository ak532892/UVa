class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int R, int C, int r0, int c0) {
        bool visit[100][100] = {};
        queue<pair<int, int>> q;
        vector<vector<int>> res;
        q.emplace(pair<int, int>{r0, c0});
        while (!q.empty()) {
            int size = q.size();
            while (size--) {
                pair<int, int> p = q.front();
                q.pop();
                if (p.first < 0 || p.first >= R || p.second < 0 || p.second >= C)
                    continue;
                if (visit[p.first][p.second])
                    continue;
                res.emplace_back(vector<int>{p.first, p.second});
                visit[p.first][p.second] = true;
                q.emplace(p.first, p.second - 1);
                q.emplace(p.first, p.second + 1);
                q.emplace(p.first - 1, p.second);
                q.emplace(p.first + 1, p.second);
            }
        }
        return res;
    }
};
//BFS, same distance, priority_queue