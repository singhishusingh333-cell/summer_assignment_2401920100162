class Solution {
public:
    int reverseDegree(string s) {
        int prod=1;
        int sum=0;
        for(int i=0;i<s.size();i++){
            int val='z'-s[i]+1;
            prod=val*(i+1);
            sum=sum+prod;
        }
        return sum;
    }
};