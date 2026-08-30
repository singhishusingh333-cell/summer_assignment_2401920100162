class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int minele = nums[0];
        int maxele = nums[0];
        int minidx = 0;
        int maxidx = 0;
        for (int i = 1; i < n; i++) {
            if (nums[i] < minele) {
                minele = nums[i];
                minidx = i;
            }
            if (nums[i] > maxele) {
                maxele = nums[i];
                maxidx = i;
            }
        }
        if (minidx > maxidx) {
            swap(minidx, maxidx);
        }
        int d1 = maxidx + 1;                // remove from left
        int d2 = n - minidx;                // remove from right
        int d3 = minidx + 1 + (n - maxidx); // remove from both sides

        return min({d1, d2, d3});
    }
};