class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size() != 1)
        {
            int i = 0;
            int j = 0;
            while(j < nums.size() && i < nums.size())
            {
                if(nums[i] != 0){
                    swap(nums[i],nums[j]);
                    j++;
                }
                i++;
            }
        }
    }
};