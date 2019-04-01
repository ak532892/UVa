class Solution {
public:
    int addDigits(int num) {
        while(num >= 10){
            int t = num;
            int sum = 0;
            while(t){
                sum += t%10;
                t /= 10;
            }
            num = sum;
        }
        return num;
    }
};
//recursion, O(1)