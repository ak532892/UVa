class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<long long int, int> rec;
        int M = 0, ans, lim = floor(nums.size()/2);
        for(auto i : nums){
            if(!rec[i + INT_MAX])
                rec[i + INT_MAX] = 1;
            else
                rec[i + INT_MAX]++;
            if(rec[i + INT_MAX] > M){
                M = rec[i + INT_MAX];
                ans = i;
                if(M > lim) return ans;
            }
        }
        return ans;
    }
};
//sort, Boyer-Moore Voting Algorithm