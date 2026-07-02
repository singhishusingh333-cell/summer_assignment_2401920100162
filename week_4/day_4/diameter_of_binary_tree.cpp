class Solution {
public:
    int maxDepth(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int leftheight=maxDepth(root->left)+1;
        int rightheight=maxDepth(root->right)+1;
        int ans=max(leftheight,rightheight);
        return ans;
    } 
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int d1=maxDepth(root->left)+maxDepth(root->right);//LST+ROOT+RST
        int d2=diameterOfBinaryTree(root->left);
        int d3=diameterOfBinaryTree(root->right);
        int diameter=max(d1,max(d2,d3));
        return diameter;
    }
};