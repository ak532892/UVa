class Solution {
public:
    int reverse(int x) {
        long long int reverse = 0;
        int overflow = (1<<31)-1;
        
        while(x){
            reverse = reverse*10 + x%10;
            x /= 10;
        }
        return abs(reverse) > overflow ? 0 : reverse;
    }
};
/*
INT_MIN, INT_MAX
*/