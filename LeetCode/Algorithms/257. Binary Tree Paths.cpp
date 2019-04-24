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
    vector<string> binaryTreePaths(TreeNode* root) {
        stack<pair<TreeNode*, int>> s;
        int p[10000];
        vector<string> res;
        int size = 0;
        if(root == NULL)    return res;
        s.emplace(make_pair(root, size));
        while(!s.empty()){
            pair<TreeNode*, int> top = s.top();
            size = top.second;
            p[size++] = top.first->val;
            s.pop();
            if(top.first->left)
                s.emplace(make_pair(top.first->left, size));
            if(top.first->right)
                s.emplace(make_pair(top.first->right, size));
            if(top.first->left == NULL && top.first->right == NULL){
                string tmp = to_string(p[0]);
                for(int i = 1; i < size; ++i)
                    tmp += "->" + to_string(p[i]);
                size = top.second;
                res.emplace_back(tmp);
            }
        }
        return res;
    }
};
// string recursive, string stack