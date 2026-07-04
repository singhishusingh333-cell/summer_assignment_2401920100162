class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int mid=nums.size()/2;
        int count=0;
        for(int i:nums){
            if(i==nums[mid]){
                count++;
            }
        }
        return count==1;
    }
};