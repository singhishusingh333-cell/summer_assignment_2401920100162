class Solution {
public:
    int sumCounts(vector<int>& nums) {
       unordered_set<int>s;
       int sum=0;
       for(int i=0;i<nums.size();i++){
        for(int j=i;j<nums.size();j++){
            s.insert(nums[j]);
            int n=s.size();
            sum+=(n*n);
           
        }
         s.clear();
       }
       return sum;
    }
};