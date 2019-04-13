class Solution {
public:
    vector<vector<int>> largeGroupPositions(string S) {
        vector<vector<int>> res;
        for(int i = 0; i < S.size(); i++){
            char c = S[i];
            int l = i, r, count = 0;
            while(S[++i] == c) count++;
            i--;
            r = i;
            if(count >= 2)
                res.push_back({l, r});
        }
        return res;
    }
};
//memory