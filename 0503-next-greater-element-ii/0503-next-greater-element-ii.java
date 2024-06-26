class Solution {
    public int[] nextGreaterElements(int[] nums) {
        int n = nums.length;
        int [] ans = new int[n];
        Stack<Integer> st = new Stack<>();
        
        int max = 0;
        for(int i = 1;i < n ; i++){
            if(nums[max] < nums[i]) max = i;
        }

        st.push(nums[n-1]);
        int i = n-1;
        int k = 0;
        while(i > max){
            if(i != n-1 && nums[i] < nums[i+1]){
                ans[i] = nums[i+1];
            }
            else{
                while(!st.empty() && st.peek() <= nums[i]) st.pop();
                if(!st.empty()) ans[i] = st.peek();
                else{
                    k = 0;
                    while(k < i){
                        if(nums[k] > nums[i]){
                            break;
                        }
                        k++;
                    }
                    if(k == i) ans[i] = -1;
                    else ans[i] = nums[k];
                }
            }
            st.push(nums[i]);
            i--;
        }
        ans[max] = -1;
        st.clear();
        st.push(nums[max]);
        i--;
        while(i >= 0){
            if(nums[i] < nums[i+1]){
                ans[i] = nums[i+1];
            }
            else{
                while(!st.empty() && st.peek() <= nums[i]) st.pop();
                if(st.empty()) ans[i] = -1;
                else ans[i] = st.peek();
            }
            st.push(nums[i]);
            i--;
        }
        return ans;
    }
}