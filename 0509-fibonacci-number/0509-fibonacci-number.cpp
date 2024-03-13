class Solution {
public:
    int fib(int n) {
        if(n == 0) return 0;
        if(n == 1) return 1;
        int f = 0;
        int s = 1;
        int third;
        for(int i = 2;i <= n;i++){
            third = f + s;
            f = s;
            s = third;
        }
        return third;
    }
};