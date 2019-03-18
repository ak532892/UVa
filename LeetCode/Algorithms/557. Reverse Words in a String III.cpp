class Solution {
public:
    string reverseWords(string s) {
        int begin = 0, end = 0;
        for(int i = 0; i < s.size(); i++){
            while(s[i] != ' ' && s[i])
                i++;
            end = i;
            for(int j = 0; j < (end-begin)/2; j++)
                swap(s[begin+j], s[end-j-1]);
            begin = end+1;
        }
        return s;
    }
};
//reverse