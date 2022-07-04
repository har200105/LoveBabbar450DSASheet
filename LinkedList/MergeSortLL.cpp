
class Solution{
  public:
  Node *getMiddle(Node *head){
    
    Node *slow = head;
    Node *fast = head;
    Node *mid;
    
    while(fast->next!=NULL && fast->next->next!=NULL){
      slow = slow->next;
      fast = fast->next;
    }
        if(fast->next!=NULL){
         mid = slow->next;
       }
         else{
         mid = slow;
       }

         slow->next = NULL;

         return mid;

  }



  Node *merge(Node *head1 ,Node *head2)

  {

       Node *tail=NULL;

       Node *head = NULL;

      if(head1->data>head2->data)

      {

         head = tail = head2;

          head2 = head2->next;

      }

      else

      {

          head = tail = head1;

          head1 = head1->next;

      }

      while(head1!=NULL && head2!=NULL)

      {

          if(head1->data <= head2->data)

          {

              tail->next = head1;

              head1 = head1->next;

              tail = tail->next;

          }

          else 

          {

              tail->next = head2;

              head2 = head2->next;

              tail = tail->next;

          }

      }

      if(head1==NULL)

      tail->next = head2;

      else

      tail->next = head1;

     return head;

  }

  



    Node* mergeSort(Node* head) {

        if(head==NULL ||  head->next == NULL){
            return head;
        }

        Node *mid = getMiddle(head);
        Node *left = mergeSort(head);
        Node *right = mergeSort(mid);
        
        return  merge(left,right);;

    }
};
