class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix[0].size();
        int j = 0;
        int i = 0;
        for(i = 0;i < matrix.size(); i++){
            if(matrix[i][n-1] == target) return true;
            if(matrix[i][n-1] < target) continue;
            int l = 0;
            int r = n-1;
            while(l <= r){
                int mid = (l+r)/2;
                if(target == matrix[i][mid]) return true;
                else if(target > matrix[i][mid]){
                    l = mid + 1;
                }
                else{
                    r = mid - 1;
                }
            }
        }
        return false;
    }
};