class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        int n=nums.size ();
        // for the odd index
        for ( int j=1;j<n-2;j+=2){
        for (int i=1;i<n-2;i+=2){
            if (nums[i]<nums[i+2]){
                swap(nums[i],nums[i+2]);
            }
        }
        }
        //for the even index
         for ( int j=0;j<n-2;j+=2){
        for (int i =0;i<n-2;i+=2){
            if (nums[i]>nums[i+2]){
                swap(nums[i],nums[i+2]);
            }
        }
         }
       return nums; 
    }
};