
class Solution {
public:
    vector<int> assignTasks(vector<int>& servers, vector<int>& tasks) {

        using P = pair<int, int>;
        using T = tuple<long long, int, int>;

        priority_queue<P, vector<P>, greater<P>> available;

        priority_queue<T, vector<T>, greater<T>> busy;

        int n = servers.size();
        int m = tasks.size();

        for (int i = 0; i < n; i++) {
            available.push({servers[i], i});
        }

        vector<int> ans(m);
        long long time = 0;

        for (int j = 0; j < m; j++) {

            time = max(time, (long long)j);

            while (!busy.empty() && get<0>(busy.top()) <= time) {
                auto [endTime, weight, index] = busy.top();
                busy.pop();

                available.push({weight, index});
            }

            if (available.empty()) {
                time = get<0>(busy.top());

                while (!busy.empty() && get<0>(busy.top()) <= time) {
                    auto [endTime, weight, index] = busy.top();
                    busy.pop();

                    available.push({weight, index});
                }
            }

            auto [weight, index] = available.top();
            available.pop();

            ans[j] = index;

            busy.push({time + tasks[j], weight, index});
        }

        return ans;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna