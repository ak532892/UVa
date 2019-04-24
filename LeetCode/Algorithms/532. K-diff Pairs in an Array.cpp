class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int res = 0;
        if(!nums.size()) return 0;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size()-1; ++i){
            if(i && nums[i] == nums[i-1])
                continue;
            for(int j = i + 1; j < nums.size() && nums[j]-nums[i] <= k; ++j){
                if(!(j > i+1 && (nums[j] == nums[j-1])) && (nums[j]-nums[i] == k))
                    ++res;
            }
        }
        return res;
    }
};
// binary search, unordered_map