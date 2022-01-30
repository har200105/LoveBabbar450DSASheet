// Recursive


void preorder(Node* root){
	
	if(node==NULL){
		return;
	}

	cout<<root->data<<endl;
	preorder(root->left);
	preorder(root->right);

}