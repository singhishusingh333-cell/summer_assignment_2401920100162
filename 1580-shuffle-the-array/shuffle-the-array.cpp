class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>ans;
        int even=0;
        int odd= n;
      for (int i=0;i<(2*n);i++){
        if (i%2==0){
           ans.push_back(nums[even]);
           even++;
           continue;
        }
        ans.push_back(nums[odd]);
        odd++;
      }
      
      return ans;  
    }
};