// Recursive


void inorder(Node* root){
	
	if(node==NULL){
		return;
	}

	inorder(root->left);
	cout<<root->data<<endl;
	inorder(root->right);

}

// Iterative

vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> st; 
        TreeNode* node = root;
        vector<int> inorder; 
        
        while(1) {
            
            if(node != NULL) {
                st.push(node); 
                node = node->left; 
            }

            else {
    
                if(st.empty() == true) break; 
                node = st.top(); 
                st.pop(); 
                inorder.push_back(node->val); 
                node = node->right; 
            }  

        }

        return inorder; 

}