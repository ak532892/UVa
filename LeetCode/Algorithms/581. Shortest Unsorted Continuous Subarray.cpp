class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int M = nums[0], m;
        int start = -1, end = 0;
        for(int i = 0; i < nums.size()-1; ++i){
            if(M > nums[i+1]){
                if(start == -1) {
                    start = i;
                    m = nums[i];
                }
                end = i + 1;
                m = min(m, nums[i+1]);
            }
            M = max(M, nums[i+1]);
        }
        for(int i = start-1; i >= 0; --i){
            if(nums[i] > m)
                start = i;
        }
        return start == -1 ? 0 : end - start + 1;
    }
};
// max min one loop