class Solution {
public:
    int rotatedDigits(int N) {
        int res = 0;
        int MAP[10] = {0, 0, 1, 2, 2, 1, 1, 2, 0, 1};
        for (int i = 1; i <= N; ++i) {
            int t = i, pot = 0;
            while (t) {
                int remain = t % 10;
                if (MAP[remain] == 2)
                    break;
                else if (MAP[remain])
                    pot = 1;
                t /= 10;
            }
            if(t == 0 && pot)
                ++res;
        }
        return res;
    }
};
// use map value