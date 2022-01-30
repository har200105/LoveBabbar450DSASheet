int ma=0;
int func(Node* root){
	
	if(!root){
		return 0;
	}

	int l = func(root->left);
	int r = func(root->right);
	
	ma = max(ma,l+r+root->data);
	return r+l+root->data;

}