class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        int size = A.size();
        vector<int> ans(size);
        
        for(auto &i:A)
            i = i*i;
        if(size == 1)
            ans[0] = A[0];
        int i = 1, j = size-1, k = 0;
        for(; i < size; i++)
            if(A[i-1] < A[i]){
                ans[k++] = A[i-1];
                j = i-2;
                while(i<size && j >= 0){
                    if(A[i] <= A[j])
                        ans[k++] = A[i++];
                    else if(A[i] > A[j])
                        ans[k++] = A[j--];
                }
                while(j >= 0)
                    ans[k++] = A[j--];
                while(i < size)
                    ans[k++] = A[i++];
            }
        while(j >= 0)
            ans[k++] = A[j--];
        while(i < size)
            ans[k++] = A[i++];

        return ans;
    }
};
//Two Pointer, backwards