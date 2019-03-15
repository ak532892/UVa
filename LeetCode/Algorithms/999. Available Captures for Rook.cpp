class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int cap = 0;
        int Rx, Ry, breakFlag = 0;
        for(int i = 0; i < 8 && !breakFlag; i++){
            for(int j = 0; j < 8 && !breakFlag; j++)
                if(board[i][j] == 'R'){
                    Rx = j;
                    Ry = i;
                    breakFlag = 1;
                }
        }
        for(int i = Ry; i >= 0; i--){
            if(board[i][Rx] == 'p'){
                cap++;
                break;
            }
            if(board[i][Rx] == 'B')
                break;
        }
        for(int i = Ry; i < 8; i++){
            if(board[i][Rx] == 'p'){
                cap++;
                break;
            }
            if(board[i][Rx] == 'B')
                break;
        }
        for(int i = Rx; i >= 0; i--){
            if(board[Ry][i] == 'p'){
                cap++;
                break;
            }
            if(board[Ry][i] == 'B')
                break;
        }
        for(int i = Rx; i < 8; i++){
            if(board[Ry][i] == 'p'){
                cap++;
                break;
            }
            if(board[Ry][i] == 'B')
                break;
        }
        return cap;
    }
};
//search function