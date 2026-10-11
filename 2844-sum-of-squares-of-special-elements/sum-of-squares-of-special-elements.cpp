class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n=nums.size();
        long long s=0;
        for(int i=0;i<nums.size();i++){
            if(n%(i+1)==0){
                s=s+1LL*(nums[i]*nums[i]);
            }
        }
        return s;
    }
};