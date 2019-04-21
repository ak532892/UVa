class Solution {
public:
    int lengthOfLastWord(string s) {
        int res = 0;
        stringstream sin(s);
        while(sin>>s)
            res = s.size();
        return res;
    }
};
// isspace