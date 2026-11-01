
class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int> nums;

        for(int i = 0; i < grid.size(); i++) {
            for(int j = 0; j < grid[0].size(); j++) {
                nums.push_back(grid[i][j]);
            }
        }

        sort(nums.begin(), nums.end());

        int median = nums[nums.size() / 2];
        int ans = 0;

        for(int i = 0; i < nums.size(); i++) {
            if(abs(nums[i] - median) % x != 0) {
                return -1;
            }

            ans += abs(nums[i] - median) / x;
        }

        return ans;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna