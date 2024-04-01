class Solution {
public:
    int firstMissingPositive(vector<int>& nums)
    {
        int ans = 0;
        sort(nums.begin(),nums.end());
        int k = 1;
        int i;
        for(i = 0;i < nums.size(); i++){
            if(nums[i] > 0) break;
        }
        int m = i;
        int n = i+1;
        while(n < nums.size() && m < nums.size()){
            if(nums[m] == nums[n]){
                nums[n] = INT_MIN;
            }
            else{
                m = n;
            }
            n++;
        }
        while(i < nums.size()){
            if(nums[i] == INT_MIN){
                i++;
                continue;
            }
            if(nums[i] != k) break;
            i++;
            k++;
        }
        return k;
    }
};