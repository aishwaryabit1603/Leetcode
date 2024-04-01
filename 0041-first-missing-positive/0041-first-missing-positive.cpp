class Solution {
public:
    int firstMissingPositive(vector<int>& nums)
    {
        map<int,bool> mp;
        for(int i = 0;i < nums.size();i++){
            if(nums[i] > 0){
                 mp[nums[i]] = true;
            }
        }
        int k = 1;
        for(int i = 0;i < nums.size(); i++){
            if(nums[i] <= 0) continue;
            if(mp[k] != true) break;
            k++;
        }
        return k;
    }
};