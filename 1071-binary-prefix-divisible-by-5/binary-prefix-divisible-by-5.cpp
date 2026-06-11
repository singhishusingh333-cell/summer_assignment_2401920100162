class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool>arr;
        int num=0;
        for(int bit:nums){
            num=(num*2+bit)%5;
            arr.push_back(num==0);
        }
        return arr;
    }
};