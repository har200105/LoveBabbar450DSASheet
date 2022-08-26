     Node* helper(int pre[],int n,int bound,int &i){
         
      if(i==n || pre[i]>bound){
            return NULL;
      }
    
      Node* root=newNode(pre[i]);
      i++;
      root->left=helper(pre,n,root->data,i);
      root->right=helper(pre,n,bound,i);
      return root;
  }
  
  Node* post_order(int pre[], int n){
      int i=0;
      return helper(pre,n,INT_MAX,i);
}