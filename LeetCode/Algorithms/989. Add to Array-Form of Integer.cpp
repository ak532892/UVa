class Solution {
public:
    vector<int> addToArrayForm(vector<int>& A, int K) {
        int carry = 0;
        for(int i = A.size()-1; i >= 0; i--){
            A[i] = (A[i] + K%10 + carry);
            carry = A[i] / 10;
            A[i] %= 10;
            K /= 10;
        }
        while(K){
            A.insert(A.begin(), (K%10 + carry)%10);
            carry = (K%10 + carry)/10;
            K /= 10;
        }
            
        if(carry)
            A.insert(A.begin(), 1);
        return A;
    }
};
//sum, reverse