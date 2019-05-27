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
    int sumRootToLeaf(TreeNode* root) {
        int res = 0;
        queue<pair<int, TreeNode*>> q;
        if (root) {
            q.emplace(make_pair(root->val, root));
            while (!q.empty()) {
                int size = q.size();
                while (size--) {
                    pair<int, TreeNode*> f = q.front();
                    q.pop();
                    if (f.second->left) q.emplace(make_pair(2 * f.first + f.second->left->val, f.second->left));
                    if (f.second->right) q.emplace(make_pair(2 * f.first + f.second->right->val, f.second->right));
                    if (f.second->left == NULL && f.second->right == NULL)
                        res += f.first;
                }
            }
        }
        return res;
    }
};
//DFS