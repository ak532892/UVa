class Solution {
public:
    bool isAnagram(string s, string t) {
        int map[125] = {};
        for (char c : s) ++map[c];
        for (char c : t) {
            --map[c];
            if(map[c] < 0)  return false;
        }
        for (char c = 'a'; c != 'z'+1; ++c) {
            if (map[c])  return false;
        }
        return true;
    }
};
// preprocessing of different length