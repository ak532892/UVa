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
    void inorder(TreeNode* root){
        if(!root)   return;
        inorder(root->left);
        if(!t)
            t = head = new TreeNode(root->val);
        else{
            t->right = new TreeNode(root->val);
            t->left = NULL;
            t = t->right;
        }
        inorder(root->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
        inorder(root);
        return head;
    }
private:
    TreeNode *head = NULL, *t = NULL;
};
//recursive, stack