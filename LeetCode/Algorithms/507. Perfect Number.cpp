class Solution {
public:
    bool checkPerfectNumber(int num) {
         int sum = num!=1;
         for(int i = 2; i < sqrt(num); ++i){
             if(!(num%i))
                 sum = sum+i+num/i;
         }
        return sum == num;
    }
};
//return List of perfect numbers, Euclid-Euler Theorem