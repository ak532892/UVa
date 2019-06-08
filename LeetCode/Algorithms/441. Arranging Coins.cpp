class Solution {
public:
    int arrangeCoins(int n) {
        return (-1 + (int)sqrt(1 + 8.*n)) >> 1;
    }
};