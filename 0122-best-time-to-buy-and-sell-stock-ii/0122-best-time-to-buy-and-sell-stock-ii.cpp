class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n  = prices.size();
        int ans  = 0 ; 

        for (int i=0; i<n-1; i++){
            if (prices[i] <prices[i+1]) {
                 ans += (prices[i+1]-prices[i]);
            }
        }
        
        return ans ; 
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna