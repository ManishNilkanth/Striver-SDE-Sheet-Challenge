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
    private:
    int len(ListNode* head)
    {   int ans = 0;
        while(head != NULL)
        {
            head = head->next;
            ans++;
        }
        return ans;
    }
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        int lambai = len(head);
        if(lambai < k)
        {
            return head;
        }
        ListNode* pre = NULL;
        ListNode* curr = head;
        ListNode* forword = NULL;

        int count = 0;

        while(count < k && curr != NULL)
        {
           forword = curr->next;
           curr->next = pre;
           pre = curr;
           curr = forword;
           count++;
        }

        if(forword != NULL)
        {
            head->next = reverseKGroup(forword,k);
        }
        return pre;
    }
};