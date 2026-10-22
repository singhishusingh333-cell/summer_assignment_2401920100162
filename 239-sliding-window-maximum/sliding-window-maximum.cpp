class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        vector<int> ans;
        //process 1st window
        for (int index = 0; index < k; index++) {

            while (!dq.empty() && nums[dq.back()] < nums[index]) {
                dq.pop_back();
            }
            dq.push_back(index);
        }
        ans.push_back(nums[dq.front()]);
        // first window ke process ke baad hm next pura window process karenge
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