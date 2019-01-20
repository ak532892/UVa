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
    int maxDepth(Node* root) {
        int ans = 0;
        queue<Node*> que;
        
        if(root == NULL) return{};
        que.push(root);
        while(!que.empty()){
            int n = que.size();
            while(n--){
                for(auto i : que.front()->children)
                    que.push(i);
                que.pop();
            }
            ans++;
        }
        return ans;
    }
};
//dfs