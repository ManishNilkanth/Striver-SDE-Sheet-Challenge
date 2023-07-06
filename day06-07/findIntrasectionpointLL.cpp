/****************************************************************

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

*****************************************************************/
// finding the difference between both the linked list
 pair<int,bool> dif(Node* l1,Node* l2)
 {
    int cnt1 = 1;
    int cnt2 = 1;
    while(l1 || l2)
    {
        if(l1 != NULL)
        {
            cnt1++;
            l1 = l1->next;
        }
        if(l2 != NULL)
        {
            cnt2++;
            l2 = l2->next;
        }
        
    }
    if(cnt1 >= cnt2)
    {
        return{cnt1-cnt2,true};
    }
    else
    {
        return{cnt2-cnt1,false};
    }
     
 }
Node* findIntersection(Node *firstHead, Node *secondHead)
{
    pair<int,bool> ans = dif(firstHead,secondHead);
    //it shows that the first linked list is greater then second one
    if(ans.second)
    {   int i = ans.first;
        while(i != 0)
        {
            firstHead = firstHead->next;
            i--;
        }
    }
    else
    {
        int i = ans.first;
        while(i != 0)
        {
            secondHead = secondHead->next;
            i--;
        }
    }
    while(firstHead != secondHead)
    {
        firstHead = firstHead->next;
        secondHead = secondHead->next;
    }
    return firstHead;
}
