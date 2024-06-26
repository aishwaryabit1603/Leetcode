class Solution {
    public int[] nextGreaterElements(int[] nums) {
        int n = nums.length;
        int [] ans = new int[n];
        Stack<Integer> st = new Stack<>();
        
        for(int i = n - 1;i > -1; i--){
            while(!st.empty() && st.peek() <= nums[i]) st.pop();
            st.push(nums[i]);
        }
        int i = n-1;
        while(i > -1){
            while(!st.empty() && st.peek() <= nums[i]) st.pop();
            if(st.empty()) ans[i] = -1;
            else ans[i] = st.peek();
            
            st.push(nums[i]);
            i--;
        }
        return ans;
    }
}