class Solution {
    public int minPatches(int[] nums, int n) {
        long sum = 0;
        int res = 0;
        long needed = 1;
        int k = 0;
        while(sum < n){
            if(sum >= needed){
                // check for next value
                needed = sum + 1;
            }
            else{
                if(k < nums.length && nums[k] <= needed){
                    sum += nums[k];
                    k++;
                }
                else{
                    //hypothetically added
                    res++;
                    sum += needed;
                }
            }
        }
        return res;
    }
}