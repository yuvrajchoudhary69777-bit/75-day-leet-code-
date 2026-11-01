
class Solution {
public:
    int flipgame(vector<int>& fronts, vector<int>& backs) {
        unordered_set<int> bad;

        for(int i = 0; i < fronts.size(); i++) {
            if(fronts[i] == backs[i]) {
                bad.insert(fronts[i]);
            }
        }

        int ans = INT_MAX;

        for(int i = 0; i < fronts.size(); i++) {
            if(!bad.count(fronts[i])) {
                ans = min(ans, fronts[i]);
            }

            if(!bad.count(backs[i])) {
                ans = min(ans, backs[i]);
            }
        }

        return ans == INT_MAX ? 0 : ans;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna