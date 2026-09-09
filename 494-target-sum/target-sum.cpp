class Solution {
public:
    int solve(vector<int>&nums,int index,int sum,int target){
        if(index==nums.size()){
            if(sum==target)return 1;
            else return 0;
        }
        int add=solve(nums,index+1,sum+nums[index],target);
        int sub=solve(nums,index+1,sum-nums[index],target);
        return add+sub;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        return solve(nums,0,0,target);
    }
};