class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        long long int t = x, m = 0;
        while(x){
            m = m*10 + x%10;
            x /= 10;
        }
        return t == m;
    }
};