class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char, int> m;
        for (int i = 0; i < order.size(); ++i)
            m[order[i]] = i;
        for (int j = 0; j < words.size()-1; ++j) {
            if (m[words[j][0]] > m[words[j+1][0]])
                return false;
            else if (m[words[j][0]] == m[words[j+1][0]]) {
                int MIN = min(words[j].size(), words[j+1].size());
                for (int i = 0; i < MIN; ++i) {
                    if (m[words[j][i]] > m[words[j+1][i]] || ((i == MIN-1) && (words[j].size() > words[j+1].size())))
                        return false;
                }
            }
        }
        return true;
    }
};
// is_sorted