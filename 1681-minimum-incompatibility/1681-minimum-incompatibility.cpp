
class Solution {
public:
    int minimumIncompatibility(vector<int>& nums, int k) {
        int n = nums.size();
        int m = n / k;

        if (n % k != 0) return -1;

        sort(nums.begin(), nums.end());

        // Check whether any number occurs more than k times
        unordered_map<int, int> freq;

        for (int x : nums) {
            freq[x]++;
            if (freq[x] > k) return -1;
        }

        int N = 1 << n;
        vector<int> cost(N, -1);

        // Precompute valid subsets and their incompatibility
        for (int mask = 0; mask < N; mask++) {
            if (__builtin_popcount(mask) != m)
                continue;

            int mn = INT_MAX;
            int mx = INT_MIN;
            unordered_set<int> st;
            bool valid = true;

            for (int i = 0; i < n; i++) {
                if (mask & (1 << i)) {
                    if (st.count(nums[i])) {
                        valid = false;
                        break;
                    }

                    st.insert(nums[i]);
                    mn = min(mn, nums[i]);
                    mx = max(mx, nums[i]);
                }
            }

            if (valid) {
                cost[mask] = mx - mn;
            }
        }

        vector<int> dp(N, -1);

        function<int(int)> solve = [&](int mask) -> int {
            if (mask == N - 1) return 0;

            if (dp[mask] != -1)
                return dp[mask];

            int ans = INT_MAX;
            
            // Find first unused element
            int first = 0;

            while (mask & (1 << first))
                first++;

            // Try all possible subsets
            int remaining = (N - 1) ^ mask;

            for (int sub = remaining; sub; sub = (sub - 1) & remaining) {

                // Subset must contain first unused element
                if (!(sub & (1 << first)))
                    continue;

                if (cost[sub] == -1)
                    continue;

                int next = solve(mask | sub);

                if (next != INT_MAX) {
                    ans = min(ans, cost[sub] + next);
                }
            }

            return dp[mask] = ans;
        };

        int ans = solve(0);

        return ans == INT_MAX ? -1 : ans;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna