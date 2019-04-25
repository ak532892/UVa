class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        for(int i = 0, sum = 0; i < nums.size()-1; ++i){
            if(nums[i] > nums[i+1]){
                if((i == 0) || (nums[i-1] <= nums[i+1]))
                    nums[i] = nums[i+1];
                else if((i == nums.size()-2) || (nums[i] <= nums[i+2]))
                    nums[i+1] = nums[i];
                else
                    sum++;
                sum++;
            }
            if(sum >= 2)    return 0;
        }
        return 1;
    }
};
// check sorted