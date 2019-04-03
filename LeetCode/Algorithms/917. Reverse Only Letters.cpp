class Solution {
public:
    string reverseOnlyLetters(string S) {
        int first = 0, end = S.size()-1;
        while(first <= end){
            if(isalpha(S[first]) && isalpha(S[end]))
                swap(S[first++], S[end--]);
            else if(isalpha(S[first]))
                end--;
            else
                first++;
        }
        return S;
    }
};