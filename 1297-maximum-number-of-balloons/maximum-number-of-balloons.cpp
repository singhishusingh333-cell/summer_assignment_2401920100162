class Solution {
public:
    int maxNumberOfBalloons(string text) {
        double hash[26]={0};
        for(int i=0;i<text.size();i++){
            hash[text[i]-'a']++;
        }
        int mini=min({hash['b'-'a'],hash['a'-'a'],hash['l'-'a']/2,hash['o'-'a']/2,hash['n'-'a']});
        return mini;
    }
};