class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0, tmp = 0;
        
        for(auto i : nums){
            tmp = (tmp + 1) * i;
            ans = max(ans, tmp);
        }
        return ans;
    }
};