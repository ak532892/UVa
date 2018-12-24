class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> m;
        for(auto i : nums){
            if(m[i])
                m.erase(i);
            else
                m[i]++;
        }
        return m.begin()->first;
    }
};
/*
XOR
*/