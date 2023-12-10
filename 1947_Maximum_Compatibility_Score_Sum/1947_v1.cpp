//brute force

class Solution {
public:
    int maxCompatibilitySum(vector<vector<int>>& students, vector<vector<int>>& mentors) {
        int m = students.size();
        int n = students[0].size();
        int max_count = 0;
        sort(students.begin(), students.end());
        do {
            int count = counter(students, mentors);
            if (count > max_count)
                max_count = count;
                // max_count++;
        }
        while(next_permutation(students.begin(), students.end()));
        return max_count;
    }
private:
    int counter(vector<vector<int>> student, vector<vector<int>> mentor) {
        int count = 0;
        for (int i = 0; i < student.size(); i++) {
            for (int j = 0; j < student[i].size(); j++)
                if (student[i][j] == mentor[i][j])
                    count++;
        }
        return count;
    }
};
