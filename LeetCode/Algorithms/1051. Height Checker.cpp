class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> sort_heights = heights;
        sort(sort_heights.begin(), sort_heights.end());
        int res = 0;
        for (int i = 0; i < heights.size(); ++i) {
            if (heights[i] != sort_heights[i])
                ++res;
        }
        return res;
    }
};
// boolean, inner_product