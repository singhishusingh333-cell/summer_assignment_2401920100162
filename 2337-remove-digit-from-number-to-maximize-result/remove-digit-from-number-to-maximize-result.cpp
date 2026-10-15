class Solution {
public:
    string removeDigit(string number, char digit) {
        string ans="";
        for(int i=0;i<number.size();i++){
           if(number[i]==digit){
            stack<char>st;
            for(int j=0;j<number.size();j++){
                if(i!=j){
                    st.push(number[j]);
                }
            }
            string s="";
            while(!st.empty()){
                s+=st.top();
                st.pop();
            }
            reverse(s.begin(),s.end());
            if(s>ans){
                ans=s;
            }
           }
        }
        return ans;
    }
};