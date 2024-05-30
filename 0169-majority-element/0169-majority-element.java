class Solution {
    public int majorityElement(int[] nums) {
        int count = 0;
        int el = 0;

        int n = nums.length;
        for(int i = 0;i < nums.length; i++){
            if(count == 0){
                count = 1;
                el = nums[i];
            }
            else if(el == nums[i]){
                count++;
            }
            else{
                count--;
            }
        }

        count = 1;
        for(int i = 0;i < nums.length; i++){
            if(nums[i] == el){
                count++;
            }
        }
        if(count >= (n/3)) return el;
        return -1;
    }
}