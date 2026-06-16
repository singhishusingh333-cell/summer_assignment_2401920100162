class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        if (s.size() < p.size()) {
            return ans;
        }
        vector<int> pFreq(26, 0);
        vector<int> winFreq(26, 0);
        for (char ch : p) {
            pFreq[ch - 'a']++;
        }
        int k = p.size();
        for (int i = 0; i < k; i++) {
            winFreq[s[i] - 'a']++;
        }
        if (pFreq == winFreq) {
            ans.push_back(0);
        }
        for (int i = k; i < s.size(); i++) {
            winFreq[s[i] - 'a']++;     // add new character
            winFreq[s[i - k] - 'a']--; // remove old character

            if (pFreq == winFreq) {
                ans.push_back(i - k + 1);
            }
        }
        return ans;
    }
};