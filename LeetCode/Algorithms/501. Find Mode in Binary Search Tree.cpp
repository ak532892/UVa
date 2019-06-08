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
    vector<int> findMode(TreeNode* root) {
        if (root == NULL)
            return {};
        unordered_map<int, int> m;
        stack<TreeNode*> s;
        int n = 0;
        s.emplace(root);
        while (!s.empty()) {
            TreeNode* t = s.top();
            s.pop();
            if (t->left)    s.emplace(t->left); 
            if (t->right)   s.emplace(t->right);
            m[t->val]++;
            n = max(n, m[t->val]);
        }
        vector<int> res;
        for (auto i : m) {
            if (i.second == n)
                res.emplace_back(i.first);
        }
        return res;
    }
};
//inorder, memory, DFS