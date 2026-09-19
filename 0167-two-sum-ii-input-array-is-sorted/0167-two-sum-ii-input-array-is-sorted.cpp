class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size(); 
        int i = 0;
         int r = n-1; 


          while (i<r){

            int sum =  numbers[i]+ numbers[r];
            if (sum == target ){
               return {i+1, r+1};
               }
             else if ( sum<target ){
                i++;

            }
             else{
                r--;
             }
            
          }
          return {};
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna