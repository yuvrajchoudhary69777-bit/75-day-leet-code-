class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
         int n = stones.size();
         priority_queue<int>pq; 

         for (int i=0; i<n; i++){
            pq.push(stones[i]); 

         }

         while (pq.size()>=2){
            int  a =pq.top(); 
            pq.pop(); 
            int b = pq.top(); 
            pq.pop();

            if(a!=b){
                pq.push(a-b);
            }
         }
         return pq.empty ()?0:pq.top();
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna