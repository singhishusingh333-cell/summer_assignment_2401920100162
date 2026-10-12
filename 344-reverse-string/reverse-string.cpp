class Solution {
public:
    void reverseString(vector<char>& t) {
        stack<char>s;
        
        for(int i=0;i<t.size();i++){
            s.push(t[i]);
        }
        int i = 0;
        while(!s.empty()) {
            t[i] = s.top();
            s.pop();
            i++;
        }
       
    }
};