class Solution
{
    public:
    struct Node* reverseList(struct Node *head)
    {
        Node *newNode=NULL;
        
        while(head !=NULL){
            Node *next = head->next;
            head->next=newNode;
            newNode=head;
            head=next; 
        }

        // NULL<-1 <-2->3->4->5
        
        return newNode;
    }
    
};