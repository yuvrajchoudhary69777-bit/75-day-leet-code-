class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size(); 
        map<int,int>mp;

        for (int i=0; i<n; i++) { 
            int rem = target - nums[i];

            if (mp.find(rem)!=mp.end()){
            

            int j = mp[rem]; 
            return {j,i};
            }


            mp[nums[i]] = i;




        }


return {};
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna