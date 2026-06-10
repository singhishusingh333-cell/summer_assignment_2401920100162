class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>arr;
        int val=0;
        for(int i=0;i<nums.size();i++){
            val=nums[i]*nums[i];
            arr.push_back(val);
        }
        sort(arr.begin(),arr.end());
        return arr;
    }
};