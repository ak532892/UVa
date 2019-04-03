class Solution {
public:
    int countPrimeSetBits(int L, int R) {
        int primetable[21] = {0, 0, 1, 1, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0};
        int ans = 0;
        for(int i = L; i <= R; i++){
            int t = i, bit = 0;
            while(t){
                bit += t&1;
                t >>= 1;
            }
            ans += primetable[bit];
        }
        return ans;
    }
};
//__builtin_popcount, bit, 665772