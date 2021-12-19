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
    void mirror(Node* root) {
        if(!root) return;
        mirror(root->left);
        mirror(root->right);
        swap(root->left,root->right);
    }
};
