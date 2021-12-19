

Node* search(Node* root, int value){
    
    if(root->data==value || root==NULL){
        return root;
    }
    
    if(value>root->data){
        return search(root->right,value);
    }
    
    else{
        return search(root->left,value);
    }
    
    
    
    
}


Node* insert(Node* root, int Key) {
    
    
    if(root !=NULL and root->data==Key){
        return root;
    }
    
    if(root==NULL){
       return new Node(Key);
    }
    
    if(Key > root->data){
        root->right = insert(root->right,Key);
    }
    
    else{
        root->left = insert(root->left,Key);
    }
    
// }
    
    return root;
    
    
    
}
