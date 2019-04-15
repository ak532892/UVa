class Solution {
public:
    bool isPowerOfThree(int n) {
        double l = log(n)/log(3);
        return n == 0 ? false : fabs(l-ceil(l))<=1e-10;
    }
};
// Divisible