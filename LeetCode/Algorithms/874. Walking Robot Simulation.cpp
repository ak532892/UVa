class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        int res = 0;
        int dir = 0;
        int x = 0, y = 0;
        map<pair<int, int>, bool> m;
        
        for (auto obstacle : obstacles)
            m[make_pair(obstacle[0], obstacle[1])] = true;

        for (auto command : commands) {
            if (command < 0) {
                if (command == -1)
                    dir++;
                else if (command == -2)
                    dir--;
                if (dir == 4)
                    dir = 0;
                else if (dir < 0)
                    dir += 4;
            } else {
                int tx = x;
                int ty = y;
                int i;
                if (dir == 0) {
                    ty += command;
                    for (i = y+1; i <= ty; ++i){
                        if (m[make_pair(tx, i)]) {
                            y = i-1;
                            break;
                        }
                    }
                    if (i == ty+1)
                        y = ty;
                } else if (dir == 1) {
                    tx += command;
                    for (i = x+1; i <= tx; ++i){
                        if (m[make_pair(i, ty)]) {
                            x = i-1;
                            break;
                        }
                    }
                    if (i == tx+1)
                        x = tx;
                } else if (dir == 2) {
                    ty -= command;
                    for (i = y-1; i >= ty; --i){
                        if (m[make_pair(tx, i)]) {
                            y = i+1;
                            break;
                        }
                    }
                    if (i == ty-1)
                        y = ty;
                } else if (dir == 3) {
                    tx -= command;
                    for (i = x-1; i >= tx; --i){
                        if (m[make_pair(i, ty)]) {
                            x = i+1;
                            break;
                        }
                    }
                    if (i == tx-1)
                        x = tx;
                }    
            }
            res = max(res, x*x + y*y);
        }
        return res;
    }
};
// unordered_set (uint64_t)(string), map