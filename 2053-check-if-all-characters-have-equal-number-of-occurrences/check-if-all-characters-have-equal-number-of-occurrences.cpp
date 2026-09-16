class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int> mp;
        for (char c : s) {
            mp[c]++;
        }
        int freq = mp.begin()->second;//imp
        bool equal = true;
        for (auto& it : mp) {
            if (it.second != freq) {
                equal = false;
                break;
            }
        }
        return equal;
    }
};