/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    vector<int> postorder(Node* root) {
        stack<Node*> st;
        vector<int> ans;
        
        if(!root)   return ans;
        st.push(root);
        while(!st.empty()){
            Node* tmp = st.top();
            st.pop();
            ans.push_back(tmp->val);
            for(auto i : tmp->children){
                st.push(i);
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
//recursive 