// Recursive


void postorder(Node* root){
	
	if(node==NULL){
		return;
	}

	
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<endl;

}

// Iterative

  vector<int> preorderTraversal(TreeNode* root) {
        vector<int> preorder;
        if(root == NULL) return preorder; 
       
        stack<TreeNode*> st; 
        st.push(root);
        while(!st.empty()){
            root = st.top();
            st.pop(); 
            preorder.push_back(root->val); 
            if(root->right != NULL){
                st.push(root->right);
            }
            if(root->left!= NULL){
                st.push(root->left);
            }
        }
        return preorder; 
}