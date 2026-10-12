class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
         priority_queue<int, vector<int>, greater<int>> pq; 

         for (int x  :nums){
            pq.push(x); 


            if(pq.size() > k){
                pq.pop(); 
            }
         }
         return pq.top(); 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna