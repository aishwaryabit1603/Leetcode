class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int j = matrix.size()-1;
        int k = 0;
        for(int i = 0;i < matrix.size()/2;i++,j--){
            k = 0;
            while(k < matrix[0].size()){
                swap(matrix[i][k],matrix[j][k]);
                k++;
            }
        }
        // for(int i = 0;i < matrix.size(); i++){
        //     for(int j = 0;j < matrix[0].size();j++){
        //         cout << matrix[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        for(int i = 0;i < matrix.size(); i++){
            for(int j = 0;j <= i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
    }
};