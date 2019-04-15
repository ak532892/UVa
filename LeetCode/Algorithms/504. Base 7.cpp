class Solution {
public:
    string convertToBase7(int num) {
        string res;
        int neg(num < 0);
        num = abs(num);
        if(!num) res = "0";
        while(num){
            res = to_string(num%7) + res;
            num /= 7;
        }
        if(neg) res = "-" + res;
        return res;
    }
};
// ASCII, Recursive 