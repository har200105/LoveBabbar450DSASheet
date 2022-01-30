 void solve(Node*root,Node* &prev){
         if(!root){
            return;
        }
        
        solve(root->left,prev);
        
        if(prev!=NULL){
            prev->next=root;
        }
        
        prev=root;
        
        solve(root->right,prev);
   }

    void populateNext(Node *root){
        Node* prev = NULL;
        solve(root,prev);
}