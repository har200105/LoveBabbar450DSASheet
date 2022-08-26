class Node{
   public: 
    
    int data;
    
    Node *left;
    Node *right;
    
    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
    
};


class Solution{
   public:
   Node *insert(Node *root,int x,Node* &succ){
       if(root==NULL)
       {
           Node *h = new Node(x);
           return h;
       }
       
       if(root->data > x)
       {
           succ = root;
           root->left = insert(root->left,x,succ);
       }
       else if(root->data <= x)
       {
           root->right = insert(root->right,x,succ);
       }
       
       return root;
   }
   
   vector<int> findLeastGreater(vector<int>& arr, int n) {
       
       Node *root = NULL;
       for(int i=n-1;i>=0;i--)
       {
           Node *succ = NULL;
           
           root = insert(root,arr[i],succ);
           
           if(succ){
             arr[i]=succ->data;
           }
           
           else{
             arr[i]=-1;
           }           
       }
       
       return arr;
       
   }
};