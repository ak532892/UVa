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
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode *left, *right;
        
        if(root && (root->val == val))
            return root;
        else if(!root)
            return NULL;
        else{
            left = searchBST(root->left, val);
            right = searchBST(root->right, val);
        }
        
        return left ? left : right ? right : NULL;
    }
};
/*
BST, iterative, BFS
*/