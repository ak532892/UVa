class Solution {
public:
    int countSegments(string s) {
        stringstream sin(s);
        string t;
        int res = 0;
        while(sin >> t) res++;
        return res;
    }
};
//regex_replace