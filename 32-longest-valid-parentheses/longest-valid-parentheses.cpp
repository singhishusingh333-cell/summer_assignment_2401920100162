
class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        int maximum = 0;
        st.push(-1);//
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                st.push(i);//we push i because we have to find length of subarray
            }
            else {
                st.pop();
                if (st.empty()) {
                    st.push(i);
                }
                else {
                    maximum = max(maximum, i - st.top());//we have to find maximum length
                }
            }
        }
        return maximum;
    }
};
