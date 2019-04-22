class Solution {
public:
    string toHex(int num) {
        string res;
        char intHex[256];
        long long int sw = num;
        for(int i = 0; i <= 9; ++i)
            intHex[i] = '0' + i;
        for(int i = 10; i <= 15; ++i)
            intHex[i] = 'a' + i - 10;
        if(sw < 0) 
            sw = pow(16, 8) + sw;
        while(sw){
            res = intHex[sw%16] + res;
            sw /= 16;
        }
        return num == 0 ? "0" : res;
    }
};
// shift, and operator