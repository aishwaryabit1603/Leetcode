class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i = 0;
        int j = 1;
        while(j < nums.size()){
            if(nums[i] == nums[j]) return true;
            i++;
            j++;
        }
        return false;
    }
};