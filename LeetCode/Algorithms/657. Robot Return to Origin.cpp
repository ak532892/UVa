class Solution {
public:
    bool judgeCircle(string moves) {
        int UD = 0;
        int LR = 0;
        
        for(auto d:moves){
            if(d=='U')
                UD++;
            if(d=='D')
                UD--;
            if(d=='L')
                LR++;
            if(d=='R')
                LR--;
        }
        return !UD && !LR ? true:false;
    }
};
/*
unordered_map
*/