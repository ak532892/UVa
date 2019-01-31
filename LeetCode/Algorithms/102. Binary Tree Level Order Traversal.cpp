/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> que;
        vector<vector<int>> ans;
        que.push(root);
        if(root == NULL) return {};
        while(!que.empty()){
            int n = que.size();
            vector<int> level;
            while(n--){
                TreeNode* t = que.front();
                que.pop();
                level.push_back(t->val);
                if(t->left) que.push(t->left);
                if(t->right) que.push(t->right);
            }
            ans.push_back(level);
        }
        return ans;
    }
};
//emplace_back, preorder