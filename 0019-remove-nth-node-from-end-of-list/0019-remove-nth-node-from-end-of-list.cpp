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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
         if ( head ==NULL) return NULL; 
          int l=0; 
          ListNode* temp = head; 
          while(temp!=NULL){
            l++; 
            temp= temp->next; 
          }
           if (l==n){
            head=head->next; 
            return head;

           }

            int m = l-n+1;

            temp=head;

            for (int i=1; i<=m-2; i++){
                temp=temp->next;
            }

           

            
               temp->next=temp->next->next; 
               return head; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna