class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zero = -1;
        for(int i = 0, j = 0; i < nums.size(); i++){
            if(nums[i] == 0 && zero == -1)
                zero = i;
            if(nums[i] && zero != -1){
                swap(nums[zero+j], nums[i]);
                j++;
            }
        }
    }
};
/*
shift, 2 pointer
*/