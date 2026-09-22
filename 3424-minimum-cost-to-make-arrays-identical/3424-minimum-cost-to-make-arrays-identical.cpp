class Solution {
public:
    long long minCost(vector<int>& arr, vector<int>& brr, long long k) {
        long long cost1 = 0 ;

         for (int i=0; i< arr.size(); i++){
            cost1 += abs(arr[i]-brr[i]);

         }

         sort (arr.begin(), arr.end());
         sort (brr.begin(), brr.end());

         long long cost2 = k; 
           for (int i=0; i< arr.size(); i++){
            cost2 += abs(arr[i]-brr[i]);

           }
           return min(cost1, cost2);


    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna