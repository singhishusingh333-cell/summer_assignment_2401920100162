class Solution {
public:
    void solve(string &s, int start, int end) {
        if (start >= end) return;

        swap(s[start], s[end]);
        solve(s, start + 1, end - 1);
    }

    string reverseWords(string s) {
        int n = s.size();
        int start = 0;

        for (int i = 0; i <= n; i++) {
            if (i == n || s[i] == ' ') {
                solve(s, start, i - 1);
                start = i + 1;
            }
        }

        return s;
    }
};