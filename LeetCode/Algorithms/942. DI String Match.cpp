class Solution {
public:
    vector<int> diStringMatch(string S) {
        vector<int> A;
        
        for(int i = 0; i < S.size(); i++)
            A.push_back(i);
        A.push_back(S.size());
        
        int flag = 1;
        while(flag){
            flag = 0;
            for(int i = 0; i < S.size(); i++){
                if(S[i] == 'I'){
                    if(A[i] > A[i+1]){
                        swap(A[i], A[i+1]);
                        flag = 1;
                    }
                }
                else{
                    if(A[i] < A[i+1]){
                        swap(A[i], A[i+1]);
                        flag = 1;
                    }
                }   
            }
        }
        return A;
    }
};
/*
O(n), high and low
*/