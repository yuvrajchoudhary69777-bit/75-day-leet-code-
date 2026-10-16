class Solution {
public:
    int numTrees(int n) {
        vector<int> dp(n+1,0); 

        dp[0]=1; 
        dp[1]=1; 

        for (int nodes =2; nodes<=n; nodes++ ){
         //   for (int nodes =0; nodes<=n; nodes--){
                for(int root =1; root<= nodes; root++){
                    dp[nodes] += dp[root-1]*dp[nodes-root];
                }
          //  }
        }
         return dp[n];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna