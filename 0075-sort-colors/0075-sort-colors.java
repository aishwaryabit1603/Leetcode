class Solution {
    public void sortColors(int[] nums) {
        int l = 0;
        int m = 0;
        int n = nums.length;
        int h = n -1;
        while(m <= h){
            int temp = nums[m];
            if(nums[m] == 0){
                nums[m] = nums[l];
                nums[l] = temp;
                m++;
                l++;
            }
            else if(nums[m] == 1){
                m++;
            }
            else{
                nums[m] = nums[h];
                nums[h] = temp;
                h--;
            }
        }
    }
}