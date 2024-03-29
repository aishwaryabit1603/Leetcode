class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        
        if(k > n) k %= n;
        stack<int> s1;
        int m = n-k;
        for(int i = m;i < n;i++){
            s1.push(nums[i]);
        }
        for(int i = 0;i < m;i++){
            s1.push(nums[i]);
        }
        for(int i = n-1;i > -1;i--){
            nums[i] = s1.top();
            s1.pop();
        }
    }
};