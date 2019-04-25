class Solution {
    public:
    int countPrimes(int n) {
        int res = 0;
        for(int i = 2; i < n; ++i){
            int j, k;
            int sq = sqrt(i);
            for(j = 2, k = j; j <= sq; ++j){
                if(i%j == 0)
                    break;
            }
            if(j > sq)
                res++;
        }
        return res;
    }
};
//Sieve of Eratosthenes, odd num