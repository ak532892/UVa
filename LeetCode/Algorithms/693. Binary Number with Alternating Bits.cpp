class Solution {
public:
    bool hasAlternatingBits(int n) {
        int prev = n%2;
        int cur;
        n /= 2;
        while(n){
            cur = n%2;
            if(cur == prev)
                return false;
            prev = cur;
            n /= 2;
        }
        return true;
    }
};
// bit manipulation