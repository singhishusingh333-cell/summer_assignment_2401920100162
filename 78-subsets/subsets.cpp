class Solution {
public:
    void solve(vector<int>&nums,int idx,vector<vector<int>>&ans,vector<int>ds){
        if(idx==nums.size()){
            ans.push_back(ds);
            return;
        }
        ds.push_back(nums[idx]);
        solve(nums,idx+1,ans,ds);
        ds.pop_back();
      solve(nums,idx+1,ans,ds);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int idx=0;
        vector<vector<int>>ans;
        vector<int>ds;
         solve(nums,idx,ans,ds);
        return ans;
    }
};