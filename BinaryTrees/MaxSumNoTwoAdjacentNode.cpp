unordered_map<Node*,int>dp;
    //Function to return the maximum sum of non-adjacent nodes.
    int getMaxSum(Node *root) {
        
        if(!root){
            return 0;
        }
        
        if(dp[root]){
            return dp[root];
        }
        
        int include = root->data;
        
        if(root->left){
            include+=getMaxSum(root->left->left);
            include+=getMaxSum(root->left->right);
            
        }
        
        if(root->right){
            include+=getMaxSum(root->right->left);
            include+=getMaxSum(root->right->right);
        }
        
        int exclude = getMaxSum(root->left)+getMaxSum(root->right);
        
        dp[root] = max(include,exclude);
        
        
        return dp[root];
        
        
    }