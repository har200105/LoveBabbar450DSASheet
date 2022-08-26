Node* LCA(Node *root, int n1, int n2){
    
    if(!root){
        return NULL;
    }
    
    if(n1 < root->data and n2 < root->data){
        return LCA(root->left,n1,n2);
    }
    
    else if(n1 > root->data and n2 > root->data){
        return LCA(root->right,n1,n2);
    }
    
    else{
        return root;
    }
}