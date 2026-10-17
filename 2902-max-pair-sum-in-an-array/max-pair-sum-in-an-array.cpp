class Solution {
public:
    int largestDigit(int n) {
        if (n < 10) {
            return n;
        }
        int digit = n % 10;
        int rest = largestDigit(n / 10);
        return max(digit, rest);
    }

    int maxSum(vector<int>& nums) {
        int ans = -1;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                int a = largestDigit(nums[i]);
                int b = largestDigit(nums[j]);
                if (a == b) {
                    ans = max(ans, nums[i] + nums[j]);
                }
            }
        }
        return ans;
    }
};