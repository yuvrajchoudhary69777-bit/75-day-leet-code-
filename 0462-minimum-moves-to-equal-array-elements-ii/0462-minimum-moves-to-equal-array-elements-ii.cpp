class Solution {
public:
    int minMoves2(vector<int>& nums) {
         sort (nums.begin(), nums.end()); 

         int mid = nums[nums.size()/2];

         int moves = 0; 

         for ( int i = 0 ; i< nums.size(); i++){
            moves  += abs(nums[i] - mid); 

         }
         return moves; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna