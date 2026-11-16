class Solution {
public:
    string digitSum(string s, int k) {

        while(s.size()>k){
            int len=0;
            int sum=0;
            string n="";
            for(int i=0;i<s.size();i++){
                if(len<k){
                    sum=sum+(s[i]-'0');
                    len++;
                }else{
                    n+=to_string(sum);
                    sum=0;
                    len=0;
                    i=i-1;
                }
            }
            if(len>0) {
                n+=to_string(sum);
            }
            s=n;
        }
        return s;
    }
};