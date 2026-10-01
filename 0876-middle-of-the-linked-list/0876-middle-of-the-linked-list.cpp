/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
         if (head==NULL) return NULL; 

         int l = 0; 
         ListNode* temp = head; 
         while(temp!=NULL){
            l++; 
            temp= temp-> next; 


         }

         temp = head; 
         for(int i = 0 ; i<(l/2); i++){
            temp=temp-> next; 
         }
          return temp;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna