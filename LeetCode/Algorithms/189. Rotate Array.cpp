class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> nums2(nums);
        for(auto i : nums)
            nums2.push_back(i);
        
        k %= nums.size();
        for(int i = 0, j = nums.size()-k; k && i < nums.size(); ++i){
            nums[i] = nums2[j+i];
        }
    }
};
//reverse, push_back, rotate