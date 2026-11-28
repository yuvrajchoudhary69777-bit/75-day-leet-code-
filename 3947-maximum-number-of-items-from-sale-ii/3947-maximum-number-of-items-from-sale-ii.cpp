class Solution {
public:
    int maximumSaleItems(vector<vector<int>>& items, int budget) {
        int n = items.size();
        int minPrice = INT_MAX;

        for (auto &x : items) {
            minPrice = min(minPrice, x[1]);
        }

        vector<int> freq(n + 1, 0);

        for (auto &x : items) {
            freq[x[0]]++;
        }

        vector<int> gain(n + 1, 0);

        for (int i = 1; i <= n; i++) {
            for (int j = i; j <= n; j += i) {
                gain[i] += freq[j];
            }
            gain[i]--;
        }

        sort(items.begin(), items.end(),
             [](const vector<int>& a, const vector<int>& b) {
                 return a[1] < b[1];
             });

        long long ans = 0;
        long long rem = budget;


        for (auto &x : items) {
            int f = x[0];
            int p = x[1];

            if (p >= 2LL * minPrice) break;

            long long take = min((long long)gain[f], rem / p);

            ans += take * 2;
            rem -= take * p;
        }

        ans += rem / minPrice;

        return (int)ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna