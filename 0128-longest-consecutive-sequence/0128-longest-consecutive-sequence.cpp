class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int> s(nums.begin(), nums.end()); 
        int maxi =0 ; 

        for (int x : s){
            if(s.find(x-1) == s.end()){
                int current = x ;
                int count = 1 ; 


                while (s.find(current + 1) !=s.end()){
                    current ++; 
                    count ++; 

                }
                maxi = max(maxi, count); 

            }
        }
        return maxi; 

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna