class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        vector<int> ans;
        for (int index = 0; index < k; index++) {
            while (!dq.empty() && nums[dq.back()] < nums[index]) {
                dq.pop_back();
            }
            dq.push_back(index);
        }
        ans.push_back(nums[dq.front()]);
        for (int index = k; index < nums.size(); index++) {
            if (!dq.empty() && dq.front() <= index - k) {
                dq.pop_front();
            }
            while (!dq.empty() && nums[dq.back()] < nums[index]) {
                dq.pop_back();
            }
            dq.push_back(index);
            ans.push_back(nums[dq.front()]);
        }
        return ans;
    }
};