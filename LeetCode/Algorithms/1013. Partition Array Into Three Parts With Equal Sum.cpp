class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& A) {
        int sum = accumulate(A.begin(), A.end(), 0);
        sum /= 3;
        int t = 0, acc = 0;
        for (auto i : A) {
            acc += i;
            if (acc == sum) {
                acc = 0;
                ++t;
            }
        }
        return t == 3;
    }
};
//divisible