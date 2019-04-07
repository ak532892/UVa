class Solution {
public:
    string removeOuterParentheses(string S) {
        int i = 0;
        string ans = "";
        for(auto c : S){
            if(c == '('){
                if(i++ != 0)
                    ans += c;
            }
            else{
                if(--i != 0)
                    ans += c;
            }
        }
        return ans;
    }
};