class Solution {
public:
    int maxCoins(vector<int>& nums) {
        int n = nums.size();

        // Add 1 at both ends
        vector<int> arr(n + 2, 1);

        for (int i = 0; i < n; i++) {
            arr[i + 1] = nums[i];
        }

        // dp[left][right] = maximum coins
        // by bursting balloons between left and right
        vector<vector<int>> dp(n + 2, vector<int>(n + 2, 0));

        for (int len = 1; len <= n; len++) {
            for (int left = 1; left + len - 1 <= n; left++) {

                int right = left + len - 1;

                for (int k = left; k <= right; k++) {

                    int coins = arr[left - 1] * arr[k] * arr[right + 1];

                    coins += dp[left][k - 1];
                    coins += dp[k + 1][right];

                    dp[left][right] = max(dp[left][right], coins);
                }
            }
        }

        return dp[1][n];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna