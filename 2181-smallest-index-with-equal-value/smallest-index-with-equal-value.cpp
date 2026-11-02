class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        int mini=INT_MAX;
        for(int i=0;i<nums.size();i++){
            int num=i%10;
            if(num==nums[i]){
                mini=min(mini,i);
            }
        }
       if(mini==INT_MAX){
        return -1;
       }
        return mini;
    }
};