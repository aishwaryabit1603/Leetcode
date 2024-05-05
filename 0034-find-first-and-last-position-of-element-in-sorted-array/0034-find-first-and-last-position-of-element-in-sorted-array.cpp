class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans = {-1,-1};
        if(nums.size() == 0) return ans;
        bool flag = false;
        int i;
        for(i = 0;i < nums.size() && nums[i] <= target; i++){
            if(nums[i] == target && flag == false){
                ans[0] = i;
                flag = true;
            }
        }
        if(i-1 >= 0 && nums[i-1] == target){
            ans[1] = i-1;
        }
        return ans;
    }
};