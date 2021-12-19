struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};


vector<int> leftView(Node *root)
{
    vector<int>ans;
    queue<Node*>q;
    
    if(!root){
        return ans;
    }
    
    q.push(root);
    
    while(!q.empty()){
        int s = q.size();
        ans.push_back(q.front()->data);
        while(s--){
            
            Node *t = q.front();
            q.pop();
            
            if(t->left){
                q.push(t->left);
            }
            
            if(t->right){
                q.push(t->right);
            }
            
            
        }
    }
    
}
