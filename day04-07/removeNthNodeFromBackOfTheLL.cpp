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

Node* removeKthNode(Node* head, int k)
{
     Node* start = new Node();
     start->next = head;
     Node* slow = start;
     Node* fast = start;

     for(int i = 0; i < k; i++)
     {
         fast = fast->next;
     }
     while(fast->next)
     {
         fast = fast->next;
         slow = slow->next;
     }
     slow->next = slow->next->next;

     return start->next;
}
