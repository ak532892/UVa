class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
        int sumA = accumulate(A.begin(), A.end(), 0);
        int sumB = accumulate(B.begin(), B.end(), 0);
        int dif = sumA - (sumA + sumB) / 2;
        unordered_map<int, int> m;
        for (auto i : B)
            m[i] = i;
        dif *= -1;
        for (auto i : A) {
            if (m[i + dif])
                return {i, m[i + dif]};
        }
        return {};
    }
};
//MINUS, Equation, set