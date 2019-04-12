class Solution {
public:
    int longestPalindrome(string s) {
        int alp[256] = {};
        int res = 0, flag = 0;
        
        for(char c:s)
            alp[c]++;    
        
        for(int i = 0; i < 256; ++i){
            if(alp[i]%2)
                flag = 1;
            res += (alp[i]%2 ? alp[i]-1 : alp[i]);
        }
        return (res + flag);
    }
};