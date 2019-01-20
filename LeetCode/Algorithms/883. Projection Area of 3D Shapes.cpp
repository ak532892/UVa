class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int ans = 0;
        for(auto vec : grid){
            int M = vec[0];
            for(auto i : vec){
                if(i)
                    ans++;
                M = max(i, M);
            }
            ans += M;
        }
        for(int i = 0; i < grid[0].size(); i++){
            int M = grid[0][i];
            for(int j = 0; j < grid.size(); j++){
                M = max(grid[j][i], M);
            }
            ans += M;
        }
        return ans;
    }
};
//bad description