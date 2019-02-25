class Solution {
public:
    int climbStairs(int n) {
        int a = 1, b = 2;
        
        for(int i = 2; i < n; i++){
            swap(a, b);
            b = b + a;
        }
        
        return n == 1 ? a : b;
    }
};
//Binets Method