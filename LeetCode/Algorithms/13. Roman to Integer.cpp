class Solution {
public:
    int romanToInt(string s) {
        int m[256] = {};
        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;
        int res = 0;
        int size = s.size();
        for (int i = 0; i < size; ++i) {
            if ((i+1 < s.size()) && m[s[i]] < m[s[i+1]]) {
                res += m[s[i+1]] - m[s[i]];
                i++;
            }
            else res += m[s[i]];
        }
        return res;
    }
};
//memory