void morrisTraversal(Node* root, int &count){
    if(root == NULL){
        return;
    }
    Node* cur, *pre;
    cur = root;
    while(cur != NULL){
        if(cur->left == NULL){
            count++;
            cur = cur->right;
        }
        else{
            pre = cur->left;
            while(pre->right != NULL && pre->right != cur){
                pre = pre->right;
            }
            if(pre->right == NULL){
                pre->right = cur;
                cur = cur->left;
            }
            else{
                count++;
                pre->right = NULL;
                cur = cur->right;
            }
        }
    }
}


float findMedian(struct Node *root){

    
      int count = 0;
      float ans = 0;
      morrisTraversal(root, count);
      
      if(root == NULL){
          return 0;
      }
      int curcnt = 0;
      Node* current = root, *pre, *previous;
      while(current != NULL){
          if(current->left == NULL){
              curcnt++;
              if((count%2 != 0) && (curcnt == (count+1)/2)){
                  ans = current->data;
              }
              else if((count%2 == 0) && (curcnt == (count/2)+1)){
                  ans = (previous->data + current->data)/2.0;
              }
              previous = current;
              current = current->right;
          }
          else{
              pre = current->left;
              while(pre->right != NULL && pre->right != current){
                  pre = pre->right;
              }
              if(pre->right == NULL){
                  pre->right = current;
                  //previous = current;
                  current = current->left;
              }
              else{
                  curcnt++;
                  pre->right = NULL;
                  previous = pre;
                  if((count%2 != 0) && (curcnt == (count+1)/2)){
                        ans = current->data;
                  }
                  else if((count%2 == 0) && (curcnt == (count/2)+1)){
                        ans = (previous->data + current->data)/2.0;
                  }
                  previous = current;
                  current = current->right;
              }
          }
      }
      return ans;
}