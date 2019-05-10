class Solution {
public:
    int maxProfit(vector<int>& prices) {
        pair<int, int> low, height;
        int res = 0;
        if(prices.size() == 0)  return 0;
        
        low = make_pair(0, prices[0]);
        height = make_pair(0, prices[0]);
        
        for (int i = 1; i < prices.size(); ++i) {
            if (prices[i] < low.second) {
                low = make_pair(i, prices[i]);
                height = make_pair(i, prices[i]);
            }
            else if (prices[i] > height.second)
                height = make_pair(i, prices[i]);
            if (low.first < height.first)
                res = max(res, height.second - low.second);
        }
        return res;
    }
};
// Kadane's Algorithm