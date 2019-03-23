class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string S) {
        int h = 1, wid = 0;
        for(char c : S){
            int len = widths[c-'a'];
            if(wid + len > 100){
                h++;
                wid = len;
            }
            else
                wid += len;
        }
        return {h, wid};
    }
};
//bad description