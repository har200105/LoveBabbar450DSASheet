

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

class Solution {

  public:
  
  int size(Node*root){
  
   if(!root){
       return 0;
   }
  
   return 1 + size(root->left) + size(root->right);

}

int checkheap(Node* root,int n,int index){

   if(!root){
       return 1;
   }

   if(index>=n){
       return 0;
   }

   if((root->left && root->left->data > root->data) ||(root->right && root->right->data>root->data)){
       return 0;
   }
   
   return checkheap(root->left,n,2*index+1) &&  checkheap(root->right,n,2*index+2);
}

 


bool isHeap(struct Node* root) {
   
   if(!root){
       return 1;
   }

   int n=size(root);
   int index=0;
   if(checkheap(root,n,index)){
       return 1;
   }
   return 0;    
}

};