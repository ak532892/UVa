class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        vector<int> ans(A.size());
        int odd = 1, even = 0;
        
        for(auto a:A){
            if(a%2){
                ans[odd] = a;
                odd += 2;
            }
            else{
                ans[even] = a;
                even += 2;
            }
        }
        
        return ans;
    }
};
/*
rearrange A
*/