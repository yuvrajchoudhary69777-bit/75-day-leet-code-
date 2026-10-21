class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        freq[0] = 1;

        int sum = 0;
        int count = 0;

        for (int i = 0; i < nums.size(); i++) {
            sum = sum + nums[i];

            int need = sum - k;

            if (freq.find(need) != freq.end()) {
                count = count + freq[need];
            }

            freq[sum]++;
        }

        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna