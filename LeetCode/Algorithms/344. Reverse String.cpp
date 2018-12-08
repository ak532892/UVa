class Solution {
public:
    string reverseString(string s) {
        reverse(s.begin(), s.end());
        return s;
    }
};
/*
swap front and end, rbegin & rend
*/