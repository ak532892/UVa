class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        int arr[10000] = {};
        int n = A.size()/2;
        for(auto i : A){
            if(++arr[i] == n)
               return i;
        }
    }
};
/*
repeat, unordered_set, randomization 
*/