class Solution {
public:
    void moveZeroes(vector<int>& nums) {
         int n= nums.size(); 
         int start = 0; 

         for(int i=0; i<n; i++){
            if ( nums[i] !=0){
                swap (nums[start] , nums [i]);
                start+= 1; 
            }
         }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna