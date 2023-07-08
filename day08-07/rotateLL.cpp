/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */
 
Node *rotate(Node *head, int k) {
     // Write your code here
      
     Node* temp = head;
     int lenth = 1;
     while(temp->next)
     {
         temp = temp->next;
         ++lenth;
     }
     
     temp->next = head;
      k = k%lenth;
     int end = lenth - k;
     
     while(end--)
     {
         temp = temp->next;
     }
     head = temp->next;
     temp->next = NULL;
     return head;
     
     
}