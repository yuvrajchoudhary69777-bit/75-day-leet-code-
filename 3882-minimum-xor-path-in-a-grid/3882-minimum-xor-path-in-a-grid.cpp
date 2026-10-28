class Solution {
public:
    int minCost(vector<vector<int>>& gride) {
        int m = gride.size(); 
        int n = gride[0].size(); 

        vector<vector<bool>> dp(
            n, vector<bool>(1024, false)

        );

        for (int i=0; i<m;i++){
            vector<vector<bool>> next(
                n, vector<bool>(1024, false)
            ); 

            for(int j = 0 ; j<n;j++){
                if(i== 0 && j== 0){
                    next[i][gride[i][j]] =true; 
                    continue; 
                }

                if(i>0){
                    for (int x = 0; x< 1024; x++){
                        if(dp[j][x]){
                            next[j][x^gride[i][j]]= true; 
                            continue; 

                        }
                    }
                }
                if(j>0){
                    for(int x = 0; x<1024; x++){
                        if(next[j-1][x]){
                            next[j][x^gride[i][j]] =true;
                        }

                        
                    }
                }
            }
            dp =next; 

        }
        for (int x =0; x<1024; x++){
            if(dp[n-1][x]){
                return x;
            }
        }

        return -1;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna