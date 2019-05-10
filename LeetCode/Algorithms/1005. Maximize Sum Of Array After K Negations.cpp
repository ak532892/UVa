class Solution {
public:
    int largestSumAfterKNegations(vector<int>& A, int K) {
        sort(A.begin(), A.end());
        for (int i = 0; i < A.size() && K > 0; ++i, --K) {
            if (A[i] > 0 && i) {
                if(A[i] > A[i-1])
                   A[i-1] = -A[i-1];
                else
                   A[i] = -A[i];
                --i;
            }
            else
                A[i] = -A[i];
            if (A[i] == 0) --i;
        }
        return accumulate(A.begin(), A.end(), 0);
    }
};
//min_element, PriorityQueue, K % 2