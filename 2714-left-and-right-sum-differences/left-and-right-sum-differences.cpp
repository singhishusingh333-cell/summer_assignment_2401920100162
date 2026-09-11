class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> rightsum(nums.size());
        vector<int> answer;
        vector<int> leftsum(nums.size());
        int sum1 = 0;
        for (int i = 0; i < nums.size(); i++) {
            leftsum[i] = sum1;
            sum1 += nums[i];
        }
        int sum2=0;
        for (int i = nums.size() - 1; i >= 0; i--) {
            rightsum[i] = sum2;
            sum2 += nums[i];
        }
       for(int i = 0; i < nums.size(); i++) {
    answer.push_back(abs(leftsum[i] - rightsum[i]));
}
        return answer;
    }
};