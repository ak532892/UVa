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
    TreeNode* trimBST(TreeNode* root, int L, int R) {
        do{
            while (root->val < L)
                root = root->right ? root->right:NULL;
            while (root->val > R)
                root = root->left ? root->left:NULL;
        } while (root && (root->val < L || root->val > R));
        queue<TreeNode*> q;
        q.emplace(root);
        while (!q.empty()) {
            int size = q.size();
            while (size--) {
                TreeNode* cur = q.front();
                q.pop();
                if (cur->left) {
                    while (cur->left && cur->left->val < L) {
                        cur->left = cur->left->right ? cur->left->right:NULL;
                    }
                    if(cur->left)   q.emplace(cur->left);
                }
                if (cur->right) {
                    while (cur->right && cur->right->val > R) {
                        cur->right = cur->right->left ? cur->right->left:NULL;
                    }
                    if(cur->right)   q.emplace(cur->right);
                }
            }
        }
        return root;
    }
};
//Recursion 