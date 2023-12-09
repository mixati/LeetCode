class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        for (int i = 0; i < m; i++) {
            int min_n = min_x(matrix[i], n);
            if (i == max_y(matrix, m, min_n))
                return {matrix[i][min_n]};
        }
        return {};
    }
private:
    int min_x(vector<int>& a, int n) {
        int min_id = 0;
        for (int i = 1; i < n; i++) {
            if (a[i] < a[min_id])
                min_id = i;
        }
        return min_id;
    }
    int max_y(vector<vector<int>>& matrix, int m, int x) {
        int max_id = 0;
        for (int i = 1; i < m; i++) {
            if (matrix[i][x] > matrix[max_id][x])
                max_id = i;
        }
        return max_id;
    }
};
