class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i, size = nums.size();
        double rolling = 0;
        for (i = 0; i < k; ++i) 
            rolling += nums[i];
        double res = rolling;
        for (; i < size; ++i) {
            rolling += nums[i];
            rolling -= nums[i-k];
            res = res > rolling ? res : rolling;
        }
        return res/k;
    }
};
//size