class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
         int minsum=INT_MAX;
         for(int i=0;i<nums.size();i++){
            int sum=0;
            for(int j=i;j<nums.size();j++){
               sum=sum+nums[j];
               int len=j-i+1;
               if(len>=l&&len<=r&&sum>0){
                minsum=min(minsum,sum);
               }
                if (len >= r) {
                    break;
                }

            }
         }
         if(minsum==INT_MAX){
            return -1;
         }
         return minsum;
    }
};