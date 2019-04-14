class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& A) {
        vector<bool> res(A.size());
        int num = 0;
        
        for(int i = 0; i < A.size(); ++i){
            num += A[i];
            res[i] = !(num % 5);
            num = (num << 1) % 10;
        }
        
        return res;
    }
};