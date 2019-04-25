class Solution {
public:
    bool buddyStrings(string A, string B) {
        if((!A.size() && B.size()) || (!B.size() && A.size()) || (A.size() != B.size()))
            return 0;
        int i, begin, end, count, repeat[26] = {}, dup = 0;
        for(i = 0, begin = 0, end = 0, count = 0; i < A.size(); ++i){
            if(++repeat[A[i]-'a'] >= 2) dup = 1;
            if(A[i] != B[i]){
                if(count == 0)
                    begin = i;
                else{
                    end = i;
                    swap(A[begin], A[end]);
                    if(A == B) return 1;
                    else return 0;
                }
                count++;
            }
        }
        return (begin == end && begin == 0 && dup);
    }
};