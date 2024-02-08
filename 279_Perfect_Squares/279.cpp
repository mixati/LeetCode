class Solution {
public:
    int numSquares(int n) {
        vector<int> a(n+1, INT_MAX);
        a[0] = 0;
        for (int i = 1; i <= n; ++i)
            for (int j = 1; j*j <= i; ++j)
                a[i] = min(a[i], a[i-j*j] + 1);
        return a[n];
    }
};
