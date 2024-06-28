class Solution {
    public int mySqrt(int x) {
        if(x <= 1) return x;
        int l = 1;
        int h = x;
        int root = 0;
        while(l <= h){
            int mid = l + (h-l)/2;
            long sq = (long) mid * mid;
            if(sq == x) return mid;
            if(sq < x){
                root = mid;
                l = mid + 1;
            }
            else{
                h = mid - 1;
            }
        }
        return root;
    }
}