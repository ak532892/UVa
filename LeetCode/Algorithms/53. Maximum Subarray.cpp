class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_end = 0;
        int ans = nums[0];
        for(auto i:nums){
            ans = max(ans, max_end+i);
            max_end = max(max_end+i, 0);
        }
        return ans;
    }
};
//Kadane