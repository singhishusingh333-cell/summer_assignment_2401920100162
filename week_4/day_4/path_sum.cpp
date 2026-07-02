class Solution {
public:
     bool solve(TreeNode* root, int target,int sum){
         if(root==NULL){
             return false;
         }
         sum=sum+root->val;
         if(root->left==NULL&&root->right==NULL){
             return (sum==target);
         }
        
         bool leftans=solve(root->left,target,sum);
         bool rightans=solve(root->right,target,sum);
         return leftans||rightans;

     }
     bool hasPathSum(TreeNode* root, int targetSum) {
         int sum=0;
         bool ans=solve(root,targetSum,sum);
         return ans;
     }
   
};