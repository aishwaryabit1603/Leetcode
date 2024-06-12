class Solution {
    public int firstMissingPositive(int[] nums) {
        int ans = 0;
        int n = nums.length;
        // if(n == 1){
        //     if(nums[0] != 1) return 1;
        //     else return 2;
        // }
        for(int i = 0;i < n;i++){
            if(nums[i] < 0){
                nums[i] = 0;
            }
        }
        int min = -1 * Integer.MIN_VALUE;
        int i = 0;
        while(i < n){
            if(nums[i] <= n && nums[i] != min ){
                int index = Math.abs(nums[i]) - 1;
                if(index >= 0 && nums[index] == 0){
                    nums[index] = min;
                }
                else{
                   if(index >= 0 && nums[index] > 0) nums[index] *= -1; 
                }
            }
            i++;
        }
        for(i = 0;i < n;i++){
            if(nums[i] >= 0) return i+1;
        }
        return n+1;
    }
}