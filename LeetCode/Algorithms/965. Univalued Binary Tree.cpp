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
    bool isUnivalTree(TreeNode* root) {
        //iteration
        /*int target = root->val;
        
        queue<TreeNode*> que;
        que.push(root);
        while(!que.empty()){
            if(que.front()->val == target){
                if(que.front()->left)
                    que.push(que.front()->left);
                if(que.front()->right)
                    que.push(que.front()->right);
                que.pop();
            }
            else
                return false;
        }
        return true;*/

        // recursive
        if(root->left){
            if(root->val != root->left->val)
                return false;
        }
        if(root->right){
            if(root->val != root->right->val)
                return false;
        }
        return (root->left ? isUnivalTree(root->left):true) && (root->right ? isUnivalTree(root->right):true);
    }
};
//DFS