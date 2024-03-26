class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int> hp;
        for(int i = 0;i < nums.size(); i++){
            int val = target - nums[i];
            auto it = hp.find(nums[i]);
            if(it != hp.end()){
                if(hp[val] != i){
                    ans.push_back(hp[nums[i]]);
                    ans.push_back(i);
                    break;
                }
            }
            hp[val] = i;
        }
        return ans;
    }
};