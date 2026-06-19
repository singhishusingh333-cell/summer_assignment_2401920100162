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
    void takeinorder(TreeNode* root,vector<int>&arr){
        if(root==NULL){
            return;
        }
        takeinorder(root->left,arr);
        arr.push_back(root->val);
        takeinorder(root->right,arr);
    }
    void populateinorder(TreeNode* root,vector<int>&arr,int &idx){
        if(root==NULL){
            return;
        }
        populateinorder(root->left,arr,idx);
        root->val=arr[idx];
        idx++;
        populateinorder(root->right,arr,idx);
    }

    TreeNode* convertBST(TreeNode* root) {
        vector<int>arr;
        takeinorder(root,arr);
        for(int i = arr.size()-2; i >= 0; i--) {
            arr[i] += arr[i+1];
        }
        int idx=0;
        populateinorder(root,arr,idx);
        return root;

    }
};