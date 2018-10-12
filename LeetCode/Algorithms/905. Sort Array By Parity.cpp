class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        for (int i = 0; i < A.size(); i++) {
            if (A[i]%2) {
                for (int j = i+1; j < A.size(); j++) {
                    if (!(A[j]%2)) {
                        swap(A[i], A[j]);
                        break;
                    }
                }
            }
        }
        return A;
    }
};
/*
O(n), begin, end, partition
*/