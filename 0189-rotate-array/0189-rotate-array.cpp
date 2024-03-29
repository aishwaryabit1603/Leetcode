class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        
        if(k > n) k %= n;
        int i = 0;
        int j = n - 1;
        while(i <= j){
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
        
        i = 0;
        j = k-1;
        while(i <= j){
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
        
        i = k;
        j = n - 1;
        while(i <= j){
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
    }
};