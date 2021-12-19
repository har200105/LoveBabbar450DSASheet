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

class Solution
{
    public:
    

    vector<int> rightView(Node *root) {
        queue<Node*>q;
        vector<int>ans;
        
        if(!root){
            return ans;
        }
        
        q.push(root);
        
        while(!q.empty()){
            int s = q.size();
            Node *t;
            while(s--){
                t=q.front();
                q.pop();
                
                if(t->left){
                    q.push(t->left);
                }
                
                if(t->right){
                    q.push(t->right);
                }
                
            }
            
        ans.push_back(t->data);
            
        }
        return ans;
    }
};