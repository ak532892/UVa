class Solution {
public:
    int trailingZeroes(int n) {
        int res = 0;
        for(long long int i = 5; i <= n; i*=5)
            res += ceil(n/i);
        return res;
    }
};