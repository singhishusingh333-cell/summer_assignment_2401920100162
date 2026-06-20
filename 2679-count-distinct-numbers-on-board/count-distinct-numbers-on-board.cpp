class Solution {
public:
    int distinctIntegers(int n) {
        while(n>2){
            if(n%(n-1)==1){
                return n-1;
            }
        }
        return 1;
    }
};