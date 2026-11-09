class Solution {
public:
    vector<int> busiestServers(int k, vector<int>& arrival, vector<int>& load) {

        set<int> freeServers;

        for (int i = 0; i < k; i++) {
            freeServers.insert(i);
        }

        // {finishTime, serverId}
        priority_queue<
            pair<int, int>,
            vector<pair<int, int>>,
            greater<pair<int, int>>
        > busyServers;

        vector<int> count(k, 0);

        for (int i = 0; i < arrival.size(); i++) {

            // Free the servers whose requests are completed
            while (!busyServers.empty() &&
                   busyServers.top().first <= arrival[i]) {

                int server = busyServers.top().second;

                busyServers.pop();

                freeServers.insert(server);
            }

            if (freeServers.empty()) {
                continue;
            }

            int target = i % k;

            auto it = freeServers.lower_bound(target);

            if (it == freeServers.end()) {
                it = freeServers.begin();
            }

            int server = *it;

            freeServers.erase(it);

            count[server]++;

            busyServers.push({
                arrival[i] + load[i],
                server
            });
        }

        int maxi = *max_element(count.begin(), count.end());

        vector<int> ans;

        for (int i = 0; i < k; i++) {
            if (count[i] == maxi) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna