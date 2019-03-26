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
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        vector<int> v;
        queue<Node*> q;
        if(root){
            q.push(root);
            v.push_back(root->val);
            ans.push_back(v);
            v.clear();
            while(!q.empty()){
                queue<Node*> q2;
                while(!q.empty()){
                    Node* f = q.front();
                    q.pop();
                    for(auto i : f->children){
                        q2.push(i);
                        v.push_back(i->val);
                    }
                }
                if(v.size())
                    ans.push_back(v);
                v.clear();
                q = q2;
            }
        }
        return ans;
    }
};