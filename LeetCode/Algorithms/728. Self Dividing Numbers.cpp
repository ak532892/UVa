class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(; left<=right; left++){
            int tmp = left;
            while(tmp){
                int res = tmp%10;
                if((!res) || (left%res))
                    break;
                tmp /= 10;
            }
            if(!tmp)
                ans.push_back(left);
        }
        return ans;
    }
};