// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        long long int low = 0, height = n, mid = (low + height)/2;
        while(1){
            int result = guess(mid);
            if(result == -1)
                height = mid - 1;
            else if(result == 1)
                low = mid + 1;
            else
                return mid;
            mid = (low + height)/2;
        }
    }
};
//Ternary Search