class Solution {
public:
    int fixedPoint(vector<int>& A) {
        int left = 0, right = A.size() - 1;
        int mid = 0;
        while (left < right) {
            mid = left + (right - left) / 2;
            if (A[mid] >= 0)
                right = mid;
            else
                left = mid + 1;
        }
        int size = A.size();
        for (int i = mid; i < size; ++i) {
            if (A[i] == i)
                return i;
            else if (A[i] > i)
                return -1;
        }
        return -1;
    }
};
// Binary Search