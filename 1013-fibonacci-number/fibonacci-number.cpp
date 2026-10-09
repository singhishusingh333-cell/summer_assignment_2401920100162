class Solution {
public:
    int fib(int n) {
        int f1 = 0, f2 = 1;
        //int s = 0;
        for (int i = 0; i < n; i++) {
           int s = f1 + f2;
            f1 = f2;
            f2 = s;
        }
        return f1;
    }
};