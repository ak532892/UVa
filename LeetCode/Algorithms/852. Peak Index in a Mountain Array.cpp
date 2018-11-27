class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int size = A.size();
        for(int i = 0; i < size-1; i++){
            if(A[i] > A[i+1])
                return i;
            if(A[size-i-2] < A[size-i-1])
                return size-i-1;
        }
    }
};
/*
Binary Search
*/