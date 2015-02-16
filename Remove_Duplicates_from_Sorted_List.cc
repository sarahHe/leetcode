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
    ListNode *deleteDuplicates(ListNode *head) {
        ListNode *p = head, *q;
        while (p && p->next) {
            q = p->next;
            while (q && p->val == q->val) 
                q = q->next;
            
            p->next = q;
            p = q;
        }
        return head;
    }
};
