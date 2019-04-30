class Solution {
public:
    bool wordPattern(string pattern, string str) {
        unordered_map <char, string> m;
        unordered_map <string, char> m2;
        stringstream ss(str);
        
        for (int i = 0; i < pattern.size() ; ++i) {
            if(!ss.rdbuf()->in_avail()) return false;
            ss>>str;
            if (m2.find(str) != m2.end() && m2[str] != pattern[i]) return false;
            else m2[str] = pattern[i];
            if (m.find(pattern[i]) != m.end() && m[pattern[i]] != str) return false;
            else m[pattern[i]] = str;
        }
        return !ss.rdbuf()->in_avail();
    }
};
//save integer, getline