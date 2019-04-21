class Solution {
public:
    int reachNumber(int target) {
        if (target < 0)
            return reachNumber(-target);
        if(target == 1)
            return 1;
        if(target == 3)
            return 2;
        int n = ceil((-1 + sqrt(8.*target+1)) / 2);
        int low = (1+n)*n/2-2*n;
        while(low%2 != target%2){
            low += n-1;
            ++n;
        }
        return n;
    }
};
//math