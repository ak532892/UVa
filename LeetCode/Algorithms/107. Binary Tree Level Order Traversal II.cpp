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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        
        if(root == NULL)    return {};
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            vector<int> v;
            while(size--){
                TreeNode* t = q.front();
                q.pop();
                if(t->left)  q.push(t->left);
                if(t->right) q.push(t->right);
                v.emplace_back(t->val);
            }
            ans.emplace_back(v);
        }
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};
//depth, recursion