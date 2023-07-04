/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node *addTwoNumbers(Node *num1, Node *num2)
{
     Node* head = new Node();
     Node* tail = head;
     int remain = 0;

     while(num1 || num2 || remain)
     {  int sum = 0;
         if(num1 != NULL)
         {
            sum += num1->data;
            num1 = num1->next;
         }
         if(num2 != NULL)
         {
             sum += num2->data;
             num2 = num2->next;
         }

         sum += remain;
         remain = sum/10;

         Node* temp = new Node(sum%10);
         tail->next = temp;
         tail = temp;
     }
   return head->next;
}
