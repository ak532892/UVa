class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        map<int, int> m;
        vector<int> ans;
        for(int i : numbers)
            m[i] = 1;
        for(int i = 0; i < numbers.size(); i++){
            if(numbers[i] <= target){
                if(m[target-numbers[i]]){
                    ans.push_back(i+1);
                    for(int j = 0; j < numbers.size(); j++){
                        if(numbers[j] == (target-numbers[i]) && j!=i){
                            ans.push_back(j+1);
                            return ans;
                        }
                    }
                }
            }
        }
        return ans;
    }
};
// binary search