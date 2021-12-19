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

class Solution {
  public:
    int maxi;
    
    int get(Node* root){
        if(!root) return 0;
        
        int x = get(root->left);
        int y = get(root->right);
        maxi =  max(maxi,x+y+1);
        return max(x,y)+1;
    }
    
    int diameter(Node* root) {
        maxi = INT_MIN;
        int x = get(root);
        return maxi;
    }
};