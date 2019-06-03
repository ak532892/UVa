class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        string base;
        string match;
        if (str1.size() > str2.size()) {
            base = str1;
            match = str2;
        }
        else {
            base = str2;
            match = str1;
        }
        int msize = match.size();
        int bsize = base.size();
        for (int i = msize; i >= 1; --i) {
            if (msize % i == 0) {
                string t = match.substr(0, i);
                string add = t;
                if (bsize % i == 0) {
                    while (t.size() <= base.size()) {
                        if (t == base)
                            return add;
                        t = t + add;
                    } 
                }
            }
        }
        return {};
    }
};
//gcd