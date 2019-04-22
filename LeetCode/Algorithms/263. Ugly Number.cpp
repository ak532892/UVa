class Solution {
public:
    bool isUgly(int num) {
        if(num <= 0) return false;
        if(num == 1) return true;
        while(!(num%5)) num /= 5;
        while(!(num%3)) num /= 3;
        while(!(num&1)) num >>= 1;
        return num == 1;
    }
};
// 1~6