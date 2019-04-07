class Solution {
public:
    void re(string s, int f, int size, vector<string> &ans){
        int i;
        for(i = f; i < size; i++){
            if(('a' <= s[i]) && (s[i] <= 'z')){
                s[i] = s[i]-'a'+'A';
                re(s, i+1, size, ans);
                s[i] = s[i]-'A'+'a';
            }
            if(('A' <= s[i]) && (s[i] <= 'Z')){
                s[i] = s[i]-'A'+'a';
                re(s, i+1, size, ans);
                s[i] = s[i]-'a'+'A';
            }
        }
        ans.push_back(s);
    }
    vector<string> letterCasePermutation(string S) {
        vector<string> ans;
        re(S, 0, S.size(), ans);
        return ans;
    }
};
//Iterative 