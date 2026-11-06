class Solution {
public:
    vector<int> countServers(int n, vector<vector<int>>& logs,
                             int x, vector<int>& queries) {

        sort(logs.begin(), logs.end(),
             [](auto &a, auto &b) {
                 return a[1] < b[1];
             });

        vector<pair<int,int>> q;

        for (int i = 0; i < queries.size(); i++) {
            q.push_back({queries[i], i});
        }

        sort(q.begin(), q.end());

        unordered_map<int,int> mp;
        vector<int> ans(queries.size());

        int left = 0, right = 0;
        int active = 0;

        for (auto [time, idx] : q) {

            while (right < logs.size() &&
                   logs[right][1] <= time) {

                int id = logs[right][0];

                if (mp[id] == 0) active++;

                mp[id]++;
                right++;
            }

            while (left < right &&
                   logs[left][1] < time - x) {

                int id = logs[left][0];

                mp[id]--;

                if (mp[id] == 0) active--;

                left++;
            }

            ans[idx] = n - active;
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna