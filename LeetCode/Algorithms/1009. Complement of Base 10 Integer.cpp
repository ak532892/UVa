class Solution {
public:
    int bitwiseComplement(int N) {
        int t = N, count = 0;
        while(t){
            t >>= 1;
            count++;
        }
            
        return N ? ((1<<count)-1-N) : 1;
    }
};
//bit 