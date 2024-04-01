class Solution {
public:
    int reverse(int x) {
        long t = x;
        long ans = 0;
        while(t){
            ans = ans*10 + t%10;
            t /= 10;
        }
        if(ans < INT_MIN || ans > INT_MAX) return 0;
        return ans;
    }
};