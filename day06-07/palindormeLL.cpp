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
    ListNode* findMid(ListNode* head)
    {    
        ListNode* slow = head;
        ListNode* fast = head->next;
        
        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

    return slow;
    }
  ListNode* revese(ListNode* &head)
  {
      ListNode* pre = NULL;
      ListNode* curr = head;
      ListNode* forward = NULL;

      while(curr)
      {
          forward = curr->next;
          curr->next = pre;
          pre = curr;
          curr = forward;
      }
    return pre;
  }
public:
    bool isPalindrome(ListNode* head) {
        // find mid
        ListNode* mid = findMid(head);

        ListNode* head2 = revese(mid->next);
        mid->next = NULL;
        //revese second part
       

        while(head2 != NULL)
        {
            if(head->val != head2->val)
            {
                return false;
            }
            head = head->next;
            head2 = head2->next;
        }
        return true;


    }
};