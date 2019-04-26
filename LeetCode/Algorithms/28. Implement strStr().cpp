class Solution {
public:
    int strStr(string haystack, string needle) {
        int M = needle.size(), N = haystack.size();
        if(M == 0)  return 0;
        
        int f[M] = {};
        int i = 1, len = 0;
        while(i < M){
            if(needle[i] == needle[len]){
                len++;
                f[i] = len;
                i++;
            }
            else{
                if(len != 0) len = f[len-1];
                else i++;
            }
        }
        i = 0;
        int j = 0;
        while(i < N){
            if(haystack[i] == needle[j]){
                i++;
                j++;
            }
            if(j == M)
                return i-j;
            else if(i < N && haystack[i] != needle[j]){
                if (j != 0) 
                    j = f[j - 1]; 
                else
                    i = i + 1; 
            } 
        }
        return -1;
    }
};
//KMP