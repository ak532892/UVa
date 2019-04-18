class NumArray {
public:
    NumArray(vector<int>& nums) {
        int n = 0;
        this->nums = nums;
        for(auto &i : this->nums){
            n += i;
            i = n;
        }
    }
    
    int sumRange(int i, int j) {
        return i == 0 ? nums[j] : nums[j]-nums[i-1];
    }
private:
    vector<int> nums;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */
 
 //partial_sum