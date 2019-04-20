class Solution {
public:
    string addBinary(string a, string b) {
        if(b.size() > a.size())   return addBinary(b, a);
        int carry = 0;
        for(int i = a.size()-1, j = b.size()-1; (j >= 0) || (i >= 0 && carry); --i, --j){
            if(j >= 0)
                a[i] = a[i] + (b[j] - '0') + carry;
            else
                a[i] = a[i] + carry;
            if(a[i] == '2'){
                a[i] = '0';
                carry = 1;
            }
            else if(a[i] == '3'){
                a[i] = '1';
                carry = 1;
            }
            else
                carry = 0;
        }
        return carry ? "1" + a : a;
    }
};
//concise sol