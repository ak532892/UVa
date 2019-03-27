class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int ans = 0;
        int w = grid[0].size();
        int h = grid.size();
        for(int i = 0; i <  grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if(grid[i][j] == 1){
                    if(i-1 < 0)  ans++;
                    if(j-1 < 0)  ans++;
                    if(i+1 >= h)  ans++;
                    if(j+1 >= w)  ans++;
                    if(i-1 >= 0 && grid[i-1][j] == 0)  ans++;
                    if(j-1 >= 0 && grid[i][j-1] == 0)  ans++;
                    if(i+1 < h && grid[i+1][j] == 0)  ans++;
                    if(j+1 < w && grid[i][j+1] == 0)  ans++;
                }
            }
        }
        return ans;
    }
};
// 4*count-repeat*2, DFS