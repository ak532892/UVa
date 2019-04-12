class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        
        for(int i = 0; i < numRows; ++i){
            vector<int> v;
            for(int j = 0; j <= i; ++j)
                v.emplace_back((j == 0 || j == i) ? 1:res[i-1][j]+res[i-1][j-1]);
            res.emplace_back(v);
        }
        return res;
    }
};