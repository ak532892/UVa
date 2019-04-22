class Solution {
public:
    string addStrings(string num1, string num2) {
        int carry = 0;
        int dif = abs((int)(num1.size() - num2.size()));
        
        if(num1.size() < num2.size()){
            while(dif--)
                num1 = "0" + num1;
        }
        if(num1.size() > num2.size()){
            while(dif--)
                num2 = "0" + num2;
        }
        
        for(int i = num1.size()-1; i >= 0; --i){
            int n = num1[i] - '0' + num2[i] - '0' + carry;
            carry = n/10;
            n %= 10;
            num1[i] = n + '0';
        }
        if(carry) num1 = "1" + num1;
        return num1;
    }
};
