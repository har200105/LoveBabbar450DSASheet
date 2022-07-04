class Solution{
    
    public:
    
    Node *compute(Node *head){
    
    if(head == NULL || head -> next == NULL){
        return head;
    }
    
    head -> next = compute(head->next);
    
    if(head -> next -> data > head -> data){
        return head -> next;
    }
       
       return head;
    }
    
};

// or else reverse the ll , iterate and then reverse again , while iterating just do the maxi one thing.