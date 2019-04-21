class Solution {
public:
    bool isPowerOfFour(int num) {
        return !fmod(log10(num)/log10(4), 1);
    }
};
//0x55555555, bit manipulation