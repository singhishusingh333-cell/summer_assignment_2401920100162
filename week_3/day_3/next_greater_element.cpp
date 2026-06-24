class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        for(int i=0;i<nums1.size();i++){
            int j;
            for(j=0;j<nums2.size();j++){
                if(nums2[j]==nums1[i]){
                    break;
                }
            }
            int number =-1; 
            for(int k=j+1;k<nums2.size();k++){
                if(nums2[k]>nums1[i]){
                    number=nums2[k];
                    break;
                }
            }
            ans.push_back(number);
        }
        return ans;
    }
};