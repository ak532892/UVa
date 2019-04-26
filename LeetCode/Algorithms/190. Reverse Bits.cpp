class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int MAX_UINT = 1<<31, fix = 0;
        uint32_t res = 0, tmp(n);
        while (n && tmp < MAX_UINT) {
            tmp <<= 1;
            ++fix;
        }
        while (n) {
            res = res*2 + n%2;
            n >>= 1;
        }
        while (fix) {
            res <<= 1;
            --fix;
        }
        return res;
    }
};
//shift 32