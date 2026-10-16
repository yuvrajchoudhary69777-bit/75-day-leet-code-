  //part2 
class Solution {
public:
    bool canCross(vector<int>& stones) {
        int n = stones.size();

        unordered_map<int, unordered_set<int>> dp;
        for (int stone : stones) {
            dp[stone] = unordered_set<int>();
        }

        dp[0].insert(0);

        for (int i = 0; i < n; i++) {
            int pos = stones[i];

            for (int jump : dp[pos]) {
                for (int nextJump = jump - 1;
                     nextJump <= jump + 1; nextJump++) {

                    if (nextJump <= 0) continue;

                    int nextPos = pos + nextJump;

                    if (dp.find(nextPos) != dp.end()) {
                        dp[nextPos].insert(nextJump);
                    }
                }
            }
        }

        return !dp[stones[n - 1]].empty();
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna