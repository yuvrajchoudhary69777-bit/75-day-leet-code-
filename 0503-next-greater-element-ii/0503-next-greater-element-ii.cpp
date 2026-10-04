class Solution {
public:
    vector<int> nextGreater(vector<int>& arr) {
           int n = arr.size(); 
    vector<int>ans(n,-1); 
    stack<int>st;
    st.push(arr[n-1]);

    for(int i=n-2; i>=0; i--){
        while(! st.empty()&&st.top()<=arr[i]){
            st.pop(); 

        }
        ans[i] = st.empty()?-1 : st.top(); 
        st.push(arr[i]);
    }

    return ans ; 
    }
     vector<int> nextGreaterElements(vector<int>& nums) {
     int n = nums.size(); 
     for(int i=0; i<n; i++){
        nums.push_back(nums[i]);
     }
      vector<int>ans = nextGreater(nums); 

           for(int i=0; i<n; i++){
        ans.pop_back();
           }
            return ans ; 

         }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna