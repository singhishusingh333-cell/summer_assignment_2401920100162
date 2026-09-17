class Solution {
public:
    bool isvowel(char c){
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U';
    }
    string reverseVowels(string s) {
        int left=0;
        int right=s.size()-1;
        while(left<right){
             while(!isvowel(s[left])&&left<right){
               left++;
             }
             while(!isvowel(s[right])&&left<right){
               right--;
             }
             swap(s[left],s[right]);
             left++;
             right--;
        }
        return s;
    }
};