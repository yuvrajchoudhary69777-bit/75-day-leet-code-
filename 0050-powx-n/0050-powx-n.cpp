class Solution {
public:
    double findPow(double x, int n) {
        if (n==0) return 1 ; 
         

         double a = findPow(x,n/2); 
         if (n%2==0) return a*a; 
          else return a*a*x; 
     }
    double myPow(double x, int n){
        if (n==0) return 1; 
          else if (n>0)return findPow(x,n);
          else {
            long nn = n;
            nn*= 1; 
            return 1/findPow(x,nn);
          }
          } 
        
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna