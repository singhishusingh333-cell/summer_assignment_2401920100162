class Solution {
public:
    void reverseString(vector<char>& t) {
        int left=0;
        int right=t.size()-1;
        while(left<right){
            swap(t[left],t[right]);
            left++;
            right--;
        }
        //return t;
    }
};