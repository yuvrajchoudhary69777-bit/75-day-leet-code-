class Solution {
public:
vector<int> nextGreater(vector<int>& arr){
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
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> nums3 = nextGreater(nums2); 
       unordered_map<int,int>mp; 
        for(int i=0;i<nums2.size();i++){
            mp[nums2[i]]=nums3[i];
        }

        vector<int>ans; 
        for(int i=0;i<nums1.size(); i++){
            ans.push_back(mp[nums1[i]]);
        }
        return ans; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna