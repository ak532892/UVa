class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int res = 1;
        for(int i = 1, ac = 1; i < nums.size(); ++i){
            if(nums[i] > nums[i-1])
                ++ac;
            else
                ac = 1;
            res = max(res, ac);
        }
        return nums.size() == 0 ? 0 : res;
    }
};