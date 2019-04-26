class Solution {
public:
    bool isPerfectSquare(int num) {
        long left = 1, right = (num + 1.) / 2;
        while (left <= right) {
            long mid = left + (right - left) / 2;
            long val = mid * mid;
            if (val == num)    
                return true;
            else if (val > num)
                right = mid - 1;
            else
                left = mid + 1;
        }
        return false;
    }
};