class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        //vector<int>ans;
        vector<int>res;
        // for(int i=0;i<nums.size();i++){
        //     ans.push_back(nums[i]);
        // }
        for(int i=0;i<nums.size();i++){
            res.push_back(nums[i]);
           // res.push_back(ans[i]);
        }
         for(int i=0;i<nums.size();i++){
            res.push_back(nums[i]);
           // res.push_back(ans[i]);
        }
        return res;

    }
};