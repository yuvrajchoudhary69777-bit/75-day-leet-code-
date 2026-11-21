
class Solution {
public:
    int dfs(vector<vector<int>>& grid, int i, int j) {

        // Boundary check
        if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] == 0) {
            return 0;
        }

        // Collect current gold
        int gold = grid[i][j];

        // Mark visited
        grid[i][j] = 0;

        // Explore all 4 directions
        int up = dfs(grid, i - 1, j);
        int down = dfs(grid, i + 1, j);
        int left = dfs(grid, i, j - 1);
        int right = dfs(grid, i, j + 1);

        // Restore original value
        grid[i][j] = gold;

        return gold + max({up, down, left, right});
    }

    int getMaximumGold(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        int ans = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {

                if (grid[i][j] != 0) {
                    ans = max(ans, dfs(grid, i, j));
                }

            }
        }

        return ans;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna