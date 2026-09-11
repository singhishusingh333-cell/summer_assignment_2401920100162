class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
             int leftsum=0;
        int rightsum=0;
            for(int j=0;j<=i-1;j++){
                leftsum=leftsum+nums[j];
            }
            for(int k=i+1;k<=nums.size()-1;k++){
                 rightsum+=nums[k];
            }
            if(rightsum==leftsum) return i;
        }
        return -1;
    }
};