/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/
 int len(Node* head)
 {
     int len = 0;
     while(head != NULL)
     {
         head = head->next;
         len++;
     }
     return len/2;
 }
Node *findMiddle(Node *head) {
    // Write your code here

    int ans = len(head);
    int i = 0;
    Node* temp = head;

    while(i < ans)
    {
        temp = temp->next;
        i++;
    }
    return temp;


}

