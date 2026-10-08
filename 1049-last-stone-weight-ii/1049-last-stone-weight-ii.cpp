
class Solution {
public:
    int lastStoneWeightII(vector<int>& stones) {

        int total = 0;

        for (int x : stones) {
            total += x;
        }

        int target = total / 2;

        vector<int> dp(target + 1, 0);

        for (int stone : stones) {

            for (int j = target; j >= stone; j--) {

                dp[j] = max(dp[j], dp[j - stone] + stone);
            }
        }

        return total - 2 * dp[target];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna