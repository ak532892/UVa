class Solution {
public:
    int minDeletionSize(vector<string>& A) {
        int count = 0;
        
        for(int i = 0; i < A[0].size(); i++){
            int flag = 0;
            for(int j = 0; !flag && (j < A.size()-1)  ; j++){
                if(A[j][i] > A[j+1][i])
                    flag = 1;
            }
            if(flag)   count++;
        }
        return count;
    }
};
/*
simple
*/