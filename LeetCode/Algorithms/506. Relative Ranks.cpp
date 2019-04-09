class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) {
        vector<int> arr = nums;
        vector<string> ans;
        unordered_map<int, string> m;
        int size = arr.size();
        
        sort(arr.begin(), arr.end(), greater<int>());
        for(int i = 0; i < size; i++){
            if(i == 0)  m[arr[i]] = "Gold Medal";
            else if(i == 1)  m[arr[i]] = "Silver Medal";
            else if(i == 2)  m[arr[i]] = "Bronze Medal";
            else m[arr[i]] = to_string(i+1);
        }
        
        for(int i = 0; i < size; i++)
            ans.emplace_back(m[nums[i]]);

        return ans;
    }
};
//memory