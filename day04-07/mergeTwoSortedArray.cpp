#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/
/*
Approach 
1   4    5     X
2   3    5     x

.first find the smallest head.
.now make two pointers crr1 and next1.
.check the crr2 (which is basically pointing to the second list's head) can be fix in between crr1 and next1
.if yes then fix it and change crr1 to crr2 and crr2 to crr2->next.
.if not then update the curr1 and next1


*/
 Node<int>* solve(Node<int>* first, Node<int>* second)
 {  //if fist list have only one element.
     if(first->next == NULL)
     {
         first->next = second;
         return first;
     }
     
     Node<int>* curr1 = first;
     Node<int>* next1 = curr1->next;
     Node<int>* curr2 = second;
     Node<int>* next2 = NULL;
     
     while(curr2 != NULL && next1 != NULL)
     {
         if(curr2->data >= curr1->data && curr2->data <= next1->data)
         {  //put the node in between the first list
             curr1->next = curr2;
             next2 = curr2->next;
             curr2->next = next1;
            
            //update the pointers
             curr1 = curr2;
             curr2 = next2;
         }
         else
         {
             curr1 = next1;
             next1 = next1->next;

             if(next1 == NULL)
             {
                curr1->next = curr2;
                return first; 
             }
         }
     }
     return first;
 }
Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // the list may or may not be null so just check

    if(first == NULL)
    {
        return second;
    }
    if(second == NULL)
    {
        return first;
    }
    // now we need the smallest head 
    if(first->data <= second->data)
    {
        return solve(first,second);
    }
    else
    {
        return solve(second,first);
    }
}
