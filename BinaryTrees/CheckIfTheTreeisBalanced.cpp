
class Solution{
    public:
    int f=1;
    
    int solve(Node* root){
        
        if(!root){
            return 0;
        }
        
        int l = solve(root->left);
        int r = solve(root->right);
        if(abs(l-r)>1){
            f=0;
        }
        return max(l,r)+1;
        
    }
    
    bool isBalanced(Node *root)
    {
        f=1;
        solve(root);
        return f;
    }
};

