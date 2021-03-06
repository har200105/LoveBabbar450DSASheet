    bool isIsomorphic(Node *root1,Node *root2){
        
        if(!root1 && !root2){
            return true;
        }
        
        else if(!root1 || !root2){
            return false;
        }
        
        if(root1->data!=root2->data){
            return false;
        }
        
        bool a = isIsomorphic(root1->left,root2->left) and 
        isIsomorphic(root1->right,root2->right);
        bool b = isIsomorphic(root1->right,root2->left) and
         isIsomorphic(root1->left,root2->right);
        
        return a or b;
}