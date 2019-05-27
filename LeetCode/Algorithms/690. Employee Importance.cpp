/*
// Employee info
class Employee {
public:
    // It's the unique ID of each node.
    // unique id of this employee
    int id;
    // the importance value of this employee
    int importance;
    // the id of direct subordinates
    vector<int> subordinates;
};
*/
class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        unordered_map<int, pair<int, vector<int>>> sub;
        for (auto employee : employees) 
            sub[employee->id] = make_pair(employee->importance, employee->subordinates);
        int res = 0;
        queue<int> q;
        q.emplace(id);
        while (!q.empty()) {
            int f = q.front();
            q.pop();
            if (sub[f].first) {
                for (auto s : sub[f].second)
                    q.emplace(s);
            }
            res += sub[f].first;
        }
        return res;
    }
};
//DFS