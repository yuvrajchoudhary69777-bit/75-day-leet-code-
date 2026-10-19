class Solution {
    public: 
     vector<vector<int>> ans ; 
     void backtrack(vector<int>&nums, int start,
     vector<int> & current ){
     ans.push_back(current); 

     for  (int i = start; i < nums.size(); i++){
     current.push_back(nums[i]); 
     backtrack(nums, i+1, current); 
     current.pop_back(); 
     }
     }
      vector<vector<int>> subsets(vector<int>& nums){

     vector<int > current; 
     backtrack(nums, 0, current); 
     return ans; 
     }

};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna