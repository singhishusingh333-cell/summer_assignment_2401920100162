class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        for(int i=0;i<nums.size();i++){ 
            int maxnumber=INT_MIN;
            int minnumber=INT_MAX;
            for(int j=0;j<=i;j++){
                maxnumber=max(maxnumber,nums[j]);
            }
            for(int j=i;j<nums.size();j++){
                minnumber=min(minnumber,nums[j]);
            }
            if((maxnumber-minnumber)<=k){
                return i;
            }
    }
        return -1;
    }
};