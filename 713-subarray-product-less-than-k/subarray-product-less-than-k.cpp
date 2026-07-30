class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1)return 0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            long long prod=1;
            for(int j=i;j<nums.size();j++){
                prod=prod*nums[j];
                if(prod<k){
                    count++;
                }else{
                    break;
                }
            }
        }
        return count;
    }
};