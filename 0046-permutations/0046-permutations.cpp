class Solution {
public:
    vector<vector<int>> ans; 
    
        void backtrack(vector<int>& nums,
        vector<int>& current, 
        vector<bool>& used){

            if(current.size() == nums.size()){
                 ans.push_back(current); 
                  return; 

            }

            for (int i=0; i< nums.size(); i++){

                if(used[i] == true){
                    continue; 

                }

                used[i] = true; 
                current.push_back(nums[i]); 


                backtrack(nums, current, used); 

                current.pop_back(); 
                used[i] = false; 

            }
        }

            vector<vector<int>> permute(vector<int>& nums){
                ans.clear(); 


                vector<int>current; 
                vector <bool> used( nums.size(), false); 

                backtrack(nums, current, used);

                return ans; 
            

        

        

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna