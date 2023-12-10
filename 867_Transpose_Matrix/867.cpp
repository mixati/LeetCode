class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> t_mat(matrix[0].size(),vector<int>(matrix.size()));
        
        for (int i = 0; i < matrix.size(); i++)
            for (int j = 0; j < matrix[0].size(); j++)
                t_mat[j][i] = matrix[i][j];
        return t_mat;
    }
};
