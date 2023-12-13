class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
         int res = 0;

        for (int i = 0; i < mat.size(); i++) {
            if (accumulate(mat[i].begin(), mat[i].end(), 0) == 1) {
                int temp = distance(mat[i].begin(), find(mat[i].begin(), mat[i].end(), 1));
                res += getColumnSum(mat, temp) == 1;
            }
        }

        return res;        
    }

private:
    int getColumnSum(const vector<vector<int>>& mat, int temp) {
        int sum = 0;
        for (int i = 0; i < mat.size(); i++) {
            sum += mat[i][temp];
        }
        return sum;
    }
};
