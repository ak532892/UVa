class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {      
        for(auto it = nums.begin(); it != nums.end(); it++){
            vector<int>::iterator it2 = it + 1;
            
            for(; (it2 != nums.end()) && ((*it + *it2) != target); it2++);
            if(it2 != nums.end()) {
                vector<int> target;
                target.push_back(it - nums.begin());
                target.push_back(it2 - nums.begin());
                return target;
            }
        }
    }
};
/*
Map, target-num
*/