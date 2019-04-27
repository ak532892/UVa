class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = "";
        if(!strs.empty()){
            int len = strs[0].size();
            for (int i = 1; i < strs.size(); ++i)
                len = min(len, (int)strs[i].size());
            for (int i = 0; i < len; ++i) {
                char c = strs[0][i];
                int j;
                for (j = 1; j < strs.size(); ++j){
                    if(c != strs[j][i])
                        return res;
                }
                if(j == strs.size()) res += c;
            }
        }
        return res;
    }
};