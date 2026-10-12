
class Solution {
public:
    vector<double> medianSlidingWindow(vector<int>& nums, int k) {
        multiset<int> small, large;
        vector<double> ans;

        auto balance = [&]() {
            while (small.size() > large.size() + 1) {
                large.insert(*small.rbegin());
                small.erase(prev(small.end()));
            }

            while (small.size() < large.size()) {
                small.insert(*large.begin());
                large.erase(large.begin());
            }
        };

        for (int i = 0; i < nums.size(); i++) {
            // Insert current element
            if (small.empty() || nums[i] <= *small.rbegin()) {
                small.insert(nums[i]);
            } else {
                large.insert(nums[i]);
            }

            balance();

            // Remove element outside the window
            if (i >= k) {
                int outgoing = nums[i - k];

                auto it = small.find(outgoing);

                if (it != small.end()) {
                    small.erase(it);
                } else {
                    it = large.find(outgoing);
                    large.erase(it);
                }

                balance();
            }

            // Calculate median once window size reaches k
            if (i >= k - 1) {
                if (k % 2 == 1) {
                    ans.push_back(*small.rbegin());
                } else {
                    double a = *small.rbegin();
                    double b = *large.begin();

                    ans.push_back(a / 2.0 + b / 2.0);
                }
            }
        }

        return ans;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna