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
    int minDepth(TreeNode* root) {
        queue<TreeNode*> q;
        int depth = 0;
        if (!root)  return depth;
        q.emplace(root);
        while (!q.empty()) {
            int size = q.size();
            depth++;
            while (size--) {
                TreeNode* f = q.front();
                q.pop();
                if (f->left)    q.emplace(f->left);
                if (f->right)   q.emplace(f->right);
                if (!f->left && !f->right)  return depth;
            }
        }
        return depth;
    }
};
//DFS