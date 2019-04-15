class Solution {
public:
    string reverseVowels(string s) {
        int l = 0, r = s.size()-1;
        int str[256] = {};
        str['a'] = str['e'] = str['i'] = str['o'] = str['u'] = 1;
        str['A'] = str['E'] = str['I'] = str['O'] = str['U'] = 1;
        while(l < r){
            if(!str[s[l]])  l++;
            if(!str[s[r]])  r--;
            if(str[s[r]] && str[s[l]])  
                swap(s[l++], s[r--]);
        }
        return s;
    }
};
//memory