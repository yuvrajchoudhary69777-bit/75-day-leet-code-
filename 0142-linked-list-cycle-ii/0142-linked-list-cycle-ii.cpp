/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* hasCycle(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;

        while (fast != NULL && fast->next != NULL) {
            fast = fast->next->next;
            slow = slow->next;

            if (fast == slow)
                return fast;
        }

        return NULL;
    }

    ListNode* detectCycle(ListNode* head) {
        if (head == NULL)
            return NULL;

        ListNode* p1 = hasCycle(head);

        if (p1 == NULL)
            return NULL;

       
        int l = 0;
        ListNode* p2 = p1;

        do {
            p2 = p2->next;
            l++;
        } while (p2 != p1);

      
        p1 = head;
        p2 = head;

       
        for (int i = 0; i < l; i++) {
            p2 = p2->next;
        }

      
        while (p1 != p2) {
            p1 = p1->next;
            p2 = p2->next;
        }

        return p1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna