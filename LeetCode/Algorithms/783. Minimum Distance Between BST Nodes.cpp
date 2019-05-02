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
    int minDiffInBST(TreeNode* root) {
        stack<TreeNode*> s;
        int pre = root->val;
        int res = INT_MAX;
        while(root || !s.empty()){
            while(root){
                s.emplace(root);
                root = root->left;
            }
            root = s.top();
            s.pop();
            if(pre != root->val)
                res = min(res, abs(pre-root->val));
            pre = root->val;
            root = root->right;
        }
        return res;
    }
};
//revursive, same as problem 530