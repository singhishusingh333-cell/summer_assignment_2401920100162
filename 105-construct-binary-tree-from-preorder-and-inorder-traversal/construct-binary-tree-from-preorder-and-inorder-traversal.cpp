/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int getindex(int element,vector<int>arr){
        for(int i=0;i<arr.size();i++){ 
        if(arr[i]==element){
            return i;
        } 
        } 
        return -1;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder,
                        int &preorderindex, int startinorder, int endinorder) {
        if (preorderindex >= preorder.size()) {
            return NULL;
        }
        if (startinorder>endinorder){
            return NULL;
        }
        int element=preorder[preorderindex];
        preorderindex++;
        TreeNode *root = new TreeNode(element);
        int idx=getindex(element,inorder);
        root->left=buildTree(preorder,inorder,preorderindex,startinorder,idx-1);
        root->right=buildTree(preorder,inorder,preorderindex,idx+1,endinorder);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preorderindex=0;
        int startinorder=0;
        int endinorder=inorder.size();
        TreeNode* root=buildTree(preorder,inorder,preorderindex,startinorder,endinorder);
        return root;
    }
};