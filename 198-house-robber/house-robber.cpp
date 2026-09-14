class Solution {
public:
    // int byrec(vector<int>& nums, int index) {
    //     if (index >= nums.size())
    //         return 0;
    //     int include = nums[index] + byrec(nums, index + 2);
    //     int exclude = 0 + byrec(nums, index + 1);
    //     return max(include, exclude);
    // }
    //1d-DP
    // we are using tod approach---rec+memoisation
     int  recmemoisationdp(vector<int>& nums, int index,vector<int>&dp) {
        if (index >= nums.size())
            return 0;
            if(dp[index]!=-1)return dp[index];
        int include = nums[index] +  recmemoisationdp(nums, index + 2,dp);
        int exclude = 0 +  recmemoisationdp(nums, index + 1,dp);
        int ans= max(include, exclude);
        dp[index]=ans;
        return dp[index];
    }
    int rob(vector<int>& nums) {
        // return byrec(nums, 0); 
        int n=nums.size();
        vector<int>dp(n+1,-1);
        int index=0;
        return recmemoisationdp(nums,index,dp);
    }
};