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
    TreeNode* invertTree(TreeNode* root) {
        queue<TreeNode*> level;
        level.push(root);
        while(!level.empty()){
            TreeNode* tmp = level.front();
            level.pop();
            if(tmp){
                swap(tmp->left, tmp->right);
                level.push(tmp->left);
                level.push(tmp->right);
            }
        }
        return root;
    }
};
/*
Recursive DFS
*/