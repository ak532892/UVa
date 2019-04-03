class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        vector<vector<int>> ans(r, vector<int>(c));
        int w = nums[0].size(), h = nums.size();
        
        if(r*c > w*h)
            return nums;
        
        int counts = 0;
        for(int i = 0; i < h; i++)
            for(int j = 0; j < w; j++, counts++)
                ans[counts/c][counts%c] = nums[i][j];
        
        return  ans;
    }
};
// one loop