// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low = 1, high = n;
        while (low <= high) {
            int mid = low + (high-low) / 2;
            if (isBadVersion(mid)) {
                if(!isBadVersion(mid - 1))
                    return mid;
                high = mid - 1;
            }
            else {
                if(isBadVersion(mid + 1))
                    return mid + 1;
                low = mid + 1;
            }
        }
        return 0;
    }
};