/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int getindex(int element, vector<int>arr){
        for(int i=0;i<arr.size();i++){
            if(arr[i]==element){
                return i;
            }
        }
        return -1;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder,int inst,int inend,int &postindex){
        if(postindex<0){
            return NULL;
        }
        if(inst>inend){
            return NULL;
        }
        int element=postorder[postindex];
        postindex--;
        TreeNode* root=new TreeNode(element);
        int idx=getindex(element,inorder);
        root->right = buildTree(inorder, postorder, idx+1, inend, postindex);
        root->left = buildTree(inorder, postorder, inst, idx-1, postindex);
        return root;

    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int inend=inorder.size()-1;
        int inst=0;
        int postindex=postorder.size()-1;
        TreeNode*root=buildTree(inorder,postorder,inst,inend,postindex);
        return root;
    }
};