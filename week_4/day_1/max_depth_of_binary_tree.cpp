class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL){
            return NULL;
        }
        int leftheight=maxDepth(root->left)+1;
        int rightheight=maxDepth(root->right)+1;
        int ans=max(leftheight,rightheight);
        return ans;
    }
};