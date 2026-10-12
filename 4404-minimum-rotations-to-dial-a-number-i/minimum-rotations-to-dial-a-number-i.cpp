class Solution {
public:
    int minRotations(string s) {
        int ans=0;
        int curr=0;
        for(char c:s){
            int tar=c-'0';
           int diff=abs(curr-tar);
            ans=ans+min(diff,10-diff);
            curr=tar;
        }
        return ans;
    }
};