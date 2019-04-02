class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        int i, mono = 0;
        
        for(i = 1; i < A.size() && A[i-1] == A[i]; i++);
        if(i < A.size() && A[i-1] < A[i])
            mono = 1;
        
        for(; i < A.size(); i++)
            if((mono && (A[i-1] > A[i]))  || (!mono && (A[i-1] < A[i])))
               return false;
        return true;
    }
};
//One Pass, is_sorted, bit 