class Solution {
public:
    bool canConstruct(string s, string t) {
        unordered_map<char,int>count;
        for(char c:t){
            count[c-'a']++;
        }
        for(char c:s){
            if(count[c-'a']==0){
                return false;
            }
            count[c-'a']--;
        }
        return true;

    }
};