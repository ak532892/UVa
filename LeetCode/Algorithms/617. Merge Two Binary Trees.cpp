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
    void traversal(TreeNode* t1, TreeNode* t2){
        if(t1 && t2){
            if(t1->right == NULL && t2->right)
                t1->right = t2->right;
            if(t1->left == NULL && t2->left)
                t1->left = t2->left;
            if(t1 != t2)
                t1->val += t2->val;
        }
        if(t2){
            if(t2->left)
                traversal(t1->left, t2->left);
            if(t2->right)
                traversal(t1->right, t2->right);
        }
    }
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        traversal(t1, t2);
        if(t1 == NULL)  return t2;
        else return t1;
    }
};
/*
backtrack, stack, queue, main recursive
*/