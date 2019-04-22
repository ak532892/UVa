class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int acc = 0;
        for(auto &i : nums){
            i += acc;
            acc = i;
        }
        int size = nums.size();
        for(int i = 0; i < size-1; ++i){
            if(i == 0){
                if(0 == nums[size-1]-nums[i])
                    return i;
            }
            if(nums[i] == nums[size-1]-nums[i+1])
                return i+1;
        }
        return -1;
    }
};