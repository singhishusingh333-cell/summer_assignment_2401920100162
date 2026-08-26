class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
       // int count=0;
        for (int len = k; len <= s.size(); len++) {
            string result = "";
            for (int st = 0; st <= s.size() - len; st++) {
                string temp = s.substr(st, len);
                int ones=0;
                for(char &ch:temp){
                    ones+=(ch=='1')?1:0;
                }
                if (ones == k) {
                    if (result.empty() || temp < result) {
                        result = temp;
                    }
                }
            }
            if(!result.empty()) return result;
        }
        return "";
    }
};