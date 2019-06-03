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
    int sumOfLeftLeaves(TreeNode* root) {
        if (root == NULL)   return 0;
        int res = 0;
        queue<pair<TreeNode*, int>> q;
        q.emplace(make_pair(root, 0));
        while (!q.empty()) {
            int size = q.size();
            while (size--) {
                pair<TreeNode*, int> f = q.front();
                q.pop();
                if (f.first->left)
                    q.emplace(make_pair(f.first->left, 1));
                if (f.first->right)
                    q.emplace(make_pair(f.first->right, 0));
                if (f.first->left == NULL && 
                    f.first->right == NULL && f.second)
                    res += f.first->val;
            }
        }
        return res;
    }
};
//DFS