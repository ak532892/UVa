class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = nums.size();
        for(int i = size-1; i > 0; --i){
            int end = i;
            while(i > 0 && nums[i] == nums[i-1]) 
                i--;
            if(end != i){
                nums.erase(nums.begin() + i, nums.begin() + end);
            }
        }
        return nums.size();
    }
};
//Two Pointers