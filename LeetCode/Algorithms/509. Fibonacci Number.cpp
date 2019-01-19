class Solution {
public:
    int fib(int N) {
        int ans[35] = {0, 1};
        for(int i = 2; i < 35; i++)
            ans[i] = ans[i-1] + ans[i-2];
        return ans[N];
    }
};
//formula