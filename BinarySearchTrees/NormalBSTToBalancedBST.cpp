
void inorder(Node* root,vector<Node*>&traversal){
    
    if(!root){
        return;
    }
    
    if(root->left){
        inorder(root->left,traversal);
    }
    
    if(root != NULL){
    
    traversal.push_back(root);
    }
    
    if(root->right){
        inorder(root->right,traversal);
    }
    
    
}



Node* solve(Node*root,vector<Node*> &traversal,int start,int end){
    
    if(start>end ||  !root){
        return  NULL;
    }
    
    int mid  = (start + end)/2;
    
    root = traversal[mid];
    
    root->left = solve(root,traversal,start,mid-1);
    root->right = solve(root,traversal,mid+1,end);
    
    return root;
    
    
}



Node* buildBalancedTree(Node* root){    
    vector<Node*>traversal;
    inorder(root,traversal);
    int start=0;
    int end=traversal.size()-1;
    return solve(root,traversal,start,end);
}