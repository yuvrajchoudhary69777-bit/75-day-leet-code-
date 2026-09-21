class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
int n = nums.size(); 
double sum = 0; 
 for (int i=0; i<k; i++){
    sum+=nums[i]; 

 }

 double ans = sum/(double)k;

 for (int i=k; i<n; i++){
    sum+= nums[i]; 
    sum-= nums[i-k]; 


    ans = max(ans,sum/(double)k);

 }
  return ans;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna