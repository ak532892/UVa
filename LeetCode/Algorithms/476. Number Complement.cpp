class Solution {
public:
    int findComplement(int num) {
        long long int twoPower = 2;
        
        while(num >= twoPower){
            twoPower *= 2;
        }
        return twoPower - num - 1;
    }
};
/*
COMPLEMENT, AND
*/