class Solution {
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int res = 0;
        if (grid.size() < 3)
            return res;
        if (grid[0].size() < 3)
            return res;
        for (int i = 0; i < grid.size()-2; ++i) {
            for (int j = 0; j < grid[i].size()-2; ++j) {
                int sum = grid[i][j] + grid[i][j+1] + grid[i][j+2];
                int num[10] = {}, repeat = 1;
                for (int i2 = i; i2 < i + 3; ++i2) {
                    for (int j2 = j; j2 < j + 3; ++j2){
                        if(grid[i2][j2] > 9)
                            repeat = 0;
                        else
                            ++num[grid[i2][j2]];
                    }
                }
                for (int k = 1; k < 10; ++k){
                    if(num[k] >= 2 || num[k] == 0)
                        repeat = 0;
                }
                if (repeat && sum == grid[i+1][j] + grid[i+1][j+1] + grid[i+1][j+2]
                 && sum == grid[i+2][j] + grid[i+2][j+1] + grid[i+2][j+2]
                 && sum == grid[i][j] + grid[i+1][j] + grid[i+2][j]
                 && sum == grid[i][j+1] + grid[i+1][j+1] + grid[i+2][j+1]
                 && sum == grid[i][j+2] + grid[i+1][j+2] + grid[i+2][j+2]
                 && sum == grid[i][j] + grid[i+1][j+1] + grid[i+2][j+2]
                 && sum == grid[i][j+2] + grid[i+1][j+1] + grid[i+2][j])
                   ++res;
            }
        }
        return res;
    }
};