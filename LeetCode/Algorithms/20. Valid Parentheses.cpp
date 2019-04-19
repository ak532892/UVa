class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        
        for(auto i : s){
            if (i == ')' || i == '}' || i == ']'){
                if(st.empty())
                    return false;
                char c = st.top();
                st.pop();
                if(!((c == '(' && i == ')') || (c == '{' && i == '}') || (c == '[' && i == ']')))
                    return false;
            }
            else
                st.emplace(i);
        }
        return st.empty();
    }
};