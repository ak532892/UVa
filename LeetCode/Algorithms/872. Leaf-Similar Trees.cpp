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
    void build(vector<int> *v, TreeNode* root){
        stack<TreeNode*> q;
        q.push(root);
        while(!(q.empty())){
            TreeNode* t = q.top();
            q.pop();
            if(t->left == NULL && t->right == NULL)
                (*v).push_back(t->val);
            else{
                if(t->left)  q.push(t->left);
                if(t->right) q.push(t->right);
            }
        }
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> v1, v2;

        build(&v1, root1);
        build(&v2, root2);
        
        return v1 == v2;
    }
};
// recursive