
struct Node{

    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

class Solution{
    public:
    int height(struct Node* root){
        if(!root){
            return 0;
        }
        int x = height(root->left);
        int y = height(root->right);
        return max(x,y)+1;
    }
};