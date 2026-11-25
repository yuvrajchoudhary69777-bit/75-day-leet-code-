class Solution {
public:
    bool isPossible(vector<int>& nums) {

        unordered_map<int, int> freq;
        unordered_map<int, int> need;

        // Count frequency of each number
        for (int x : nums) {
            freq[x]++;
        }

        for (int x : nums) {

            if (freq[x] == 0) {
                continue;
            }

            // Case 1: Add number to an existing subsequence
            if (need[x] > 0) {

                need[x]--;
                need[x + 1]++;

            }

            // Case 2: Start a new subsequence
            else if (freq[x + 1] > 0 && freq[x + 2] > 0) {

                freq[x + 1]--;
                freq[x + 2]--;

                need[x + 3]++;

            }

            // Cannot form a valid subsequence
            else {
                return false;
            }

            freq[x]--;
        }

        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna