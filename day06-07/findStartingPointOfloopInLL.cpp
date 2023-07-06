/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    private:
    ListNode* is(ListNode* head)
    {
        ListNode* slow = head;
        ListNode* fast = head;
        while(slow && fast)
        {
            fast = fast->next;
            if(fast)
            {
                fast = fast->next;
            }
            slow = slow->next;
            if(slow == fast)
            {
               return slow;
            }
        }
        return NULL;
    }
    ListNode* startNode(ListNode* head)
    {
        ListNode* interact = is(head);
        if(interact == NULL)
        {
            return NULL;
        }
        ListNode* slow = head;
        while(slow != interact)
        {
            slow = slow->next;
            interact = interact->next;
        }
        return slow;
    }
public:
    ListNode *detectCycle(ListNode *head) {
        
        if(head == NULL || head->next == NULL)
        {
            return NULL;
        }
        return startNode(head);
    }
};