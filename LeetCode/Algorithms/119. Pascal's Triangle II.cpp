class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> res;
        for(int i = 0; i <= rowIndex; ++i)
            res.emplace_back(C(rowIndex, i));
        return res;
    }
    int C(int n, int k){
        if(k < n-k)
            k = n-k;
        long long int sum = 1;
        for(int i = n, j = 1; i > k; i--){
            sum *= i;
            if((sum/j > 0) && (j <= n-k)){
                sum /= j;
                j++;
            }
        }
        return sum;
    }
};
//O(k) space, symmetric