class Solution {
public:
    int smallestRangeI(vector<int>& A, int K) {
        int min = A[0];
        int max = A[0];
        for(auto i:A){
            if(i > max) max = i;
            if(i < min) min = i;
        }
        int ans = abs(min-max);
        
        if((min+K) >= (max-K))
            return 0;
       else
            return abs(min + 2*K - max);
    }
};