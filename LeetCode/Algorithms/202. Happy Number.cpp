class Solution {
public:
    bool isHappy(int n) {
        map<int, int> dup;
        
        while(n != 1){
            int sum = 0;
            while(n){
                sum += (n%10)*(n%10);
                n /= 10;
            }
            n = sum;
            if(dup[n])
                return false;
            dup[n] = n;
        }
        return true;
    }
};
/*
recursive, unordered_map
*/