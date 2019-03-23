class Solution {
public:
    vector<int> shortestToChar(string S, char C) {
        int ltr[10000] = {};
        int rtl[10000] = {};
        int acltr = 1, acrtl = 1, len = S.size();
        
        for(int i = 0; i < len; i++){
            if(S[i] == C)
                acltr = 0;
            if(S[len-1-i] == C)
                acrtl = 0;
            ltr[i] = acltr++;
            rtl[len-1-i] = acrtl++;
        }
        vector<int> ans;
        for(int i = 0; i < len; i++){
            if(i == 0 && rtl[i]){
                while(rtl[i] && i < len){
                    ans.push_back(rtl[i]);
                    i++;
                }
                i--;
            }
            else
                ans.push_back(min(ltr[i], rtl[i]));
        }
        for(int i = len-1; rtl[i] && i >= 0; i--){
            if(rtl[i])
                ans[i] = ltr[i];
        }
        
        return ans;
    }
};
// memory