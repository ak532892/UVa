class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int *tmp = new int[nums.size()+1];
        for(int i = 1; i <= nums.size(); i++)
            tmp[i] = i;
        for(auto i : nums)
            tmp[i] = 0;
        vector<int> ans;
        for(int i = 1; i <= nums.size(); i++)
            if(tmp[i])
                ans.push_back(i);
        return ans;
    }
};
/*
positive and negative record, swap
*/