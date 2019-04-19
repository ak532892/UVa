class Solution {
public:
    bool validMountainArray(vector<int>& A) {
        if(A.size() < 3)
            return false;
        int i = 0, f = 0;
        for(; i < A.size()-1 && A[i] < A[i+1]; ++i)f = 1;
        if(i == A.size()-1 || A[i] == A[i+1])
            return false;
        for(; i < A.size()-1 && A[i] > A[i+1]; ++i);
        return i == A.size()-1 && f;
    }
};
// one loop, climb