class Solution {
public:
    vector<int> key;
    vector<int> acc;
    
    void inorder(TreeNode* root){
        if(root){
            inorder(root->left);
            key.push_back(root->val);
            inorder(root->right);
        }
    }

    TreeNode* convertBST(TreeNode* root) {
        inorder(root);
        sort(key.begin(), key.begin() + key.size());
        acc = key;
        for(int i = 1; i < acc.size(); i++)
            acc[i] += acc[i-1];
        queue<TreeNode*> level;
        level.push(root);
        while(!level.empty()){
            TreeNode *t = level.front();
            level.pop();
            if(t){
                level.push(t->left);
                level.push(t->right);
                for(int i = 0; i < key.size(); i++)
                    if(t->val == key[i]){
                        t->val += (acc[acc.size()-1]-acc[i]);
                        break;
                    }
            }
            
        }
        return root;
    }
};
/*
recursive or stack, inorder
*/