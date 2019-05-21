class Solution {
public:
    string removeDuplicates(string S) {
        int arr[20000] = {};
        int l = 0, r = 1;
        while (r < S.size()) {
            int del = 0, shift = 0;
            while (r < S.size() && S[l] == S[r]) {
                del = 1;
                arr[l] = arr[r] = 1;
                if (l == 0 || shift) {
                    shift = 1;
                    l += 2;
                    r += 2;
                }
                else if (r == S.size()-1)
                    break;
                else {
                    while(arr[--l]);
                    while(arr[++r]);
                }
            }
            if (del) {
                l = r;
                r = r + 1;
            }
            else    l++, r++;
        }
        string res;
        for (int i = 0; i < S.size(); ++i) {
            if(!arr[i])
                res += S[i];
        }
        return res;
    }
};
// stack, recursive