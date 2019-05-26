class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int, int> m;
        int count = 0;
        for (auto i : deck) {
            ++m[i];
            count = m[i];
        }
        int MIN = 10000;
        int same = 1;
        for (auto i : m) {
            if (count != i.second) same = 0;
            MIN = min(MIN, i.second);
        }
        if (same && count > 1)    return true;
        for (int mod = 2; mod <= MIN; ++mod) {
            same = 1;
            for (auto i : m) {
                if((i.second % mod) != 0)
                    same = 0;
            }
            if (same)    return true;
        }
        return false;
    }
};
//min_element, all_of, gcd