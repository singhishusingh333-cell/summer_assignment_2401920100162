class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.size();
        for(int len=1;len<=n/2;len++){
            if(n%len==0){
                int times=n/len;
                string pattern = s.substr(0,len);
                string newstr="";
                while(times--){
                    newstr+=pattern;
                }
                if(newstr==s){
                    return true;
                }
            }
        }
        return false;
    }
};