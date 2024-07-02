class Solution {
    public int[] maxSlidingWindow(int[] nums, int k) {
        int len = nums.length - k + 1;
        int s = 0 ,e = 0,x = 0;
        int [] ans = new int[len];
        Deque<Integer> dq = new LinkedList<>();
        while(e < nums.length){
            while(!dq.isEmpty() && nums[e] > nums[dq.peekLast()]){
                dq.pollLast();
            }
            dq.addLast(e);
            if(e - s + 1 < k){
                e++;
            }
            else if(e - s + 1 == k){
                ans[x] = nums[dq.peekFirst()];
                if(s == dq.peekFirst()){
                    dq.pollFirst();
                }
                e++;
                s++;
                x++;
            }
        }
        return ans;
    }
}