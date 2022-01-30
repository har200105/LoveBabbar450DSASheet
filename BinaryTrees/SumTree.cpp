struct Node
{
    int data;
    Node* left, * right;
}; 

class Solution
{
  
    public:
        
    int f=1;
    
    int solve(Node* root){
        
        if(!root){
            return 0;
        }
        
        if(!root->left and !root->right){
            return root->data;
        }
        
        if(f==0){
            return 0;
        }
        
        int a = solve(root->left);
        int b = solve(root->right);
        
        if(a+b != root->data){
            f=0;
        }
        
        return a+b+root->data;
        
        
    }
    
    bool isSumTree(Node* root){
        f=1;
        solve(root);
        return f;
    }