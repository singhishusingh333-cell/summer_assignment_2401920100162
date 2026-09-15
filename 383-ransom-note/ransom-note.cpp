class Solution {
public:
    bool canConstruct(string s, string t) {
       unordered_map<char,int>mp;
       for(char ch:t){
        mp[ch-'a']++;
       }
       for(char s:s){
        if(mp[s-'a']==0) return false;
        mp[s-'a']--;
       }
       return true;

    }
};