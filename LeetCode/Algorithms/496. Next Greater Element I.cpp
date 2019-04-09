class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map <int, int> index;
        
        for(int i = 0; i < nums2.size(); i++)
            index[nums2[i]] = i;
        
        for(int n : nums1){
            int i;
            for(i = index[n]; i < nums2.size(); i++){
                if(nums2[i] > n){
                    ans.emplace_back(nums2[i]);
                    break;
                }
            }
            if(i == nums2.size())
                ans.emplace_back(-1);
        }
        
        return ans;
    }
};
// stack