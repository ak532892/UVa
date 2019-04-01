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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        queue<TreeNode*> que;
        
        que.push(root);
        while(!que.empty()){
            int size = que.size();
            double sum = 0;
            for(int i = 0; i < size; i++){
                TreeNode* q = que.front();
                if(q->left) que.push(q->left);
                if(q->right) que.push(q->right);
                sum += q->val;
                que.pop();
            }
            ans.push_back(sum/size);
        }
        return ans;
    }
};
//DFS, nullptr