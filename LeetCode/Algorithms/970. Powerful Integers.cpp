class Solution {
public:
    vector<int> powerfulIntegers(int x, int y, int bound) {
        unordered_set<int> s;
        vector<int> res;
        int first = 1;
        for (int i = 0; ; ++i) {
            if (first > bound)  break;
            int second = 1;
            for (int j = 0; ; ++j) {
                int sum = first + second;
                if (sum <= bound)
                    s.insert(sum);
                else
                    break;
                second *= y;
                if (y == 1)
                    break;
            }
            first *= x;
            if (x == 1)
                break;
        }
        for (auto i : s)
            res.emplace_back(i);
        return res;
    }
};
//assign