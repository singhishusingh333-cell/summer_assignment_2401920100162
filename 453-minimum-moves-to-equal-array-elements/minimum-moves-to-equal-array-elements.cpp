class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mini=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<mini){
                mini=nums[i];
            }
        }
        long long ans=0;
        for(int i=0;i<nums.size();i++){
            ans=ans+(nums[i]-mini);
        }
        return ans;
    }
};