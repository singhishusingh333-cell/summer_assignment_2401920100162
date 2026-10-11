class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        long long s=0;
        for(int i=0;i<nums.size();i++){
            if(nums.size()%(i+1)==0){
                s=s+1LL*(nums[i]*nums[i]);
            }
        }
        return s;
    }
};