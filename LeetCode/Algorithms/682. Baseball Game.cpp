class Solution {
public:
    int calPoints(vector<string>& ops) {
        int sum = 0;
        int last = 0;
        int rec[1005] = {};
        
        for(auto i : ops){
            if('0' <= i[0] && i[0] <= '9'  || i[0]=='-'){
                stringstream sin(i);
                sin >> rec[last];
                sum += rec[last++];
            }
            else if(i == "C"){
                sum -= rec[last-1];
                last--;
            }
            else if(i == "D"){
                rec[last] = rec[last-1]*2;
                sum += rec[last];
                last++;
            }
            else if(i == "+"){
                rec[last] = rec[last-1] + rec[last-2];
                sum += rec[last];
                last++;
            }
            cout<<sum<<" ";
        }
        return sum;
    }
};
// stack, accumulate