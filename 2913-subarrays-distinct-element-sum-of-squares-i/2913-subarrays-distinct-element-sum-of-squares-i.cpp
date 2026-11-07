class Solution {
public:
    int sumCounts(vector<int>& nums) {


        int n = nums.size(); 
        int ans = 0 ; 

        for (int i = 0; i< n; i++){

            unordered_set<int> st; 

            for ( int j = i; j<n; j++){

                 st.insert(nums[j]); 

                 int count = st.size();

                 ans += count * count; 
            }
        }
         return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna