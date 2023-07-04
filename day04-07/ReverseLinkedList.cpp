#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
   LinkedListNode<int>* pre = NULL;
   LinkedListNode<int>* crr = head;
   LinkedListNode<int>* forward = NULL;

   while(crr != NULL)
   {
       forward = crr->next;
       crr->next = pre;
       pre = crr;
       crr = forward;
   }
   return pre;
   
}