class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if(s.size() < p.size())
            return {};
        vector<int> res;
        vector<int> vp(26,0);
        for (auto c : p) vp[c-'a']++;
        int psize = p.size();
        vector<int> sp(26,0);
        int end;
        for (end = 0; end < psize; ++end)
            sp[s[end]-'a']++;
        if(sp == vp) res.emplace_back(0);
        for (int begin = 0; end < s.size(); ++end, ++begin) {
            sp[s[begin]-'a']--;
            sp[s[end]-'a']++;
            if(sp == vp) res.emplace_back(begin+1);
        }
        return res;
    }
};
//bit manipulation