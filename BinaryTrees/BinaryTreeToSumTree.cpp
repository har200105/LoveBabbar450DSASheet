 int solve(Node* root){
        
        
         if(!root){
            return 0;
        }
        
        int x = solve(root->left);
        int y = solve(root->right);
        int a = root->data;
        
        root->data = x+y;
        
        return x+y+a;
}
    
    void toSumTree(Node *root){
        
        solve(root);
       
}