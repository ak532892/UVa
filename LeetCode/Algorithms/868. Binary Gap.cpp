class Solution {
public:
    int binaryGap(int N) {
        int len = 0;
        int c = 0;
        while(N){
            if(N%2)
                c = 1;
            else{
                if(c != 0)
                    c++;
            }
            if(N == 1)
                c = 0;
            N /= 2;
            len = max(c, len);
        }
        return len;
    }
};
// bitwise