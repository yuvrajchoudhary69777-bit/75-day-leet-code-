class Solution {
public:
    int minMoves(vector<int>& nums) {
         int mini  = *min_element(nums.begin(), nums.end());

         int moves = 0; 

         for (int i = 0; i < nums.size(); i++) {
            moves += nums[i] - mini; 
         }
            return moves; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna