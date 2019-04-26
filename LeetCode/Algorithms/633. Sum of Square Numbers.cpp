class Solution {
public:
    bool judgeSquareSum(int c) {
        int sqrtC = sqrt(c);
        for (long a = 0; a <= sqrtC; ++a) {
            long dif = c-a*a;
            long b = sqrt(dif);
            if(b == sqrt(dif))
                return 1;
        }
        return 0;
    }
};
//one sqrt, binary search, Fermat Theorem