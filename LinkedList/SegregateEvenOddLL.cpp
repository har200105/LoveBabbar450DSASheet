 Node* divide(int N, Node *head){
        
        Node *even = NULL;
        Node *e = NULL;
        Node *o = NULL;
        Node *odd = NULL;
        
        while(head){
            if(head->data%2==0){
                if(even == NULL){
                    even = head;
                    e=head;
                }else{
                    e->next= head;
                    e=e->next;
                }
            }else{
                if(odd==NULL){
                    odd=head;
                    o=head;
                }else{
                    o->next = head;
                    o=o->next;
                }
            }
             head=head->next;
        }
       
       if(e){
           e->next=odd;
       }
       if(o){
           o->next = NULL;
       }
       if(even){
           return even;
       }else{
           return odd;
       }
    }