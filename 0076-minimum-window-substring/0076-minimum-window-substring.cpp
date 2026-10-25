class Solution {
public:
    string minWindow(string s, string t) {
    if ( s.empty() || t.empty()){
        return ""; 

    }

    vector<int> need(128, 0); 

     for (char ch : t){
        need[ch]++; 

     }

     int left = 0 ; 
     int have = 0; 
     int required = t.size(); 

     int minLen = INT_MAX;
     int start = 0 ; 

     for (int right  = 0; 
    right<s.size(); 
    right++)
    
    {
        char ch = s[right]; 

        if ( need[ch] > 0){ 
            have++; 
        }
         need[ch]--; 

         while (have  == required){
            int len = right - left + 1; 

            if (len  < minLen){
                 minLen = len; 
                 start = left; 

            }
             char leftChar = s[left]; 
             need[leftChar]++; 

             if (need[leftChar] > 0){
                have--;

             }
             left++; 

         }
    } 
       

       if (minLen == INT_MAX){
        return ""; 

       }

       return s.substr(start, minLen); 



        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna