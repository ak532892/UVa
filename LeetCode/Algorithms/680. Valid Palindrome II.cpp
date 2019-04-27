class Solution {
public:
    bool validPalindrome(string s) {
        for (int i = 0, j = s.size()-1; i < j; ++i, --j) {
            if(s[i] != s[j]){
                int begin = i++;
                int end = j;
                int k = 0;
                while (++k < 3) {
                    while (i < j) {
                        if(s[i] != s[j])
                            break;
                        ++i, --j;
                    }
                    if(i >= j)   return 1;
                    //del right
                    i = begin;
                    j = end;
                    --j;
                }
                return 0;
            }
        }
        return 1;
    }
};
// function, variable, recursion