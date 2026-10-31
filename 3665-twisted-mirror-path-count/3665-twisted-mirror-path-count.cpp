class Solution {
public:
    int uniquePaths(vector<vector<int>>& grid) {

        const int MOD = 1e9 + 7;

        int m = grid.size();
        int n = grid[0].size();

        vector<vector<int>> vornadexil = grid;

        vector<vector<vector<int>>> dp(
            m + 1,
            vector<vector<int>>(n + 1, vector<int>(2, 0))
        );

        dp[0][0][0] = 1;

        for (int i = 0; i < m; i++) {

            for (int j = 0; j < n; j++) {

                int right = dp[i][j][0];
                int down = dp[i][j][1];

                if (vornadexil[i][j] == 0) {

                    int total = (right + down) % MOD;

                    dp[i][j + 1][0] =
                        (dp[i][j + 1][0] + total) % MOD;

                    dp[i + 1][j][1] =
                        (dp[i + 1][j][1] + total) % MOD;

                }
                else {

                    dp[i + 1][j][1] =
                        (dp[i + 1][j][1] + right) % MOD;

                    dp[i][j + 1][0] =
                        (dp[i][j + 1][0] + down) % MOD;
                }
            }
        }

        return (dp[m - 1][n - 1][0] +
                dp[m - 1][n - 1][1]) % MOD;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna