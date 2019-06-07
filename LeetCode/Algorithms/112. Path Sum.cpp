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
    bool hasPathSum(TreeNode* root, int sum) {
        if (root == NULL)   return 0;
        queue<pair<TreeNode*, int>> q;
        q.emplace(make_pair(root, root->val));
        while (!q.empty()) {
            int size = q.size();
            while (size--) {
                pair<TreeNode*, int> f = q.front();
                if (f.second == sum && f.first->left == NULL && f.first->right == NULL)
                    return 1;
                q.pop();
                if (f.first->left)
                    q.emplace(make_pair(f.first->left, f.second+f.first->left->val));
                 if (f.first->right)
                    q.emplace(make_pair(f.first->right, f.second+f.first->right->val));
            }
        }
        return 0;
    }
};
//recursion