class Solution {
public:
    int hammingDistance(int x, int y) {
        if(x > y)   swap(x, y);

        int ans = 0;
        
        while(x || y){
            if(x%2 != y%2) ans++;
            x /= 2;
            y /= 2;
        }
        
        return ans;
    }
};
/*
XOR, AND
*/