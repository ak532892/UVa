class Solution {
public:
    string repeat(int n, string s) {
        string tmp = s;
        while(--n)
            s += tmp;
        return s;
    }
    int repeatedStringMatch(string A, string B) {
        string compare = A;
        if (compare.find(B) != string::npos) return 1;
        int set = 0;
        if (B.size() / A.size() != 0)
            set = B.size() / A.size();
        compare = repeat(set ? set:2, A);
        if (compare.find(B) != string::npos) return set ? B.size() / A.size():2;
        compare += A;
        if (compare.find(B) != string::npos) return B.size() / A.size() + 1;
        compare += A;
        if (compare.find(B) != string::npos) return B.size() / A.size() + 2;
        return -1;
    }
};
// Rabin-Karp, KMP, string find