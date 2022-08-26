class Solution{
    
    public:

    map<int,int>m;
   
   Node* solve(int in[],int pre[],int &start, int instart, int inend,int n ,map<int,int>&m){
       
       if(start >= n || instart > inend) return NULL;
       int element = pre[start];
       Node* root = new Node(element);
       int pos = m[element];
       start++;
       root->left = solve(in,pre,start,instart,pos-1,n,m);
       root->right = solve(in,pre,start,pos+1,inend,n,m);
       return root;
       
   }
   
   Node* buildTree(int in[],int pre[], int n){
       
    for(int i=0;i<n;i++){
        m[in[i]]=i;
    }
    
    int preorder =0;
    
    Node * ans = solve(in,pre,preorder,0,n-1,n,m);
    
    return ans;
    
   }
};