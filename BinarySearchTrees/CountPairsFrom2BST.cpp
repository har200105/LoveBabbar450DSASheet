struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};



class Solution{
    
public:

    int c;
    
    bool fetch(Node* root2,int k){
        
        if(!root2){
            return false;
        }
        
        if(k==root2->data){
            return true;
        }
        
        bool x,y;
        
        x = false;
        
        y = false;
        
        if(k < root2->data){
            x = fetch(root2->left,k);
        }
        
        else if(k > root2->data){
            y=fetch(root2->right,k);
        }
        
        return x||y;
        
    }
    
    
    void solve(Node* root1,Node* root2,int x){
        
        if(!root1){
            return;
        }
        
        solve(root1->left,root2,x);
        
        if(fetch(root2,x-root1->data)){
            c++;
        }
        
        solve(root1->right,root2,x);

    }
    
    
    int countPairs(Node* root1, Node* root2, int x){
        c=0;
        solve(root1,root2,x);
        return c;

    }
};
