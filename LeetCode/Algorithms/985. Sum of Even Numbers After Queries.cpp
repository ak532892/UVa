class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& A, vector<vector<int>>& queries) {
        int evenSum = 0;
        vector<int> ans;
        
        for(auto i:A)
            if(!(i%2))  evenSum += i;
        for(auto que : queries){
            int before = A[que[1]];
            int after = A[que[1]] + que[0];
            A[que[1]] = after;
            if(before%2==0 && after%2==0) evenSum += (after-before);
            else if(before%2==0 && after%2!=0) evenSum -= before;
            else if(before%2!=0 && after%2==0) evenSum += after;
            ans.push_back(evenSum);
        }
        return ans;
    }
};