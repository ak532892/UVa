class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int h = matrix.size(), w = matrix[0].size();
        for(int i = 0; i < w; i++){
            int m = matrix[h-1][i];
            int x = h-1, y = i;
            while(x >= 0 && y >= 0){
                if(m != matrix[x--][y--])
                    return false;
            }
        }
        for(int i = 1; i < h; i++){
            int m = matrix[i][w-1];
            int x = i, y = w-1;
            while(x >= 0 && y >= 0){
                if(m != matrix[x--][y--])
                    return false;
            }
        }
        return true;
    }
};
//Group by Category, Compare With Top-Left Neighbor