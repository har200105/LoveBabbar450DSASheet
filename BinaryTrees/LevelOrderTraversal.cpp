struct Node
{
    int data;
    Node* left;
    Node* right;
}; 



class Solution
{
    public:
    vector<int> levelOrder(Node* root)
    {
        vector<int>ans;
        
        if(!root){
            return ans;
        }
        
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            Node *t  = q.front();
            ans.push_back(t->data);
            if(t->left){
                q.push(t->left);
            }
            if(t->right){
                q.push(t->right);
            }
            q.pop();
        }
        return ans;
    }
};