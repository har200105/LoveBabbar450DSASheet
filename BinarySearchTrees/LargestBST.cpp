
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};



struct data{
    int size;
    int largest;
    int lowest;
};


 struct data solve(Node* root){
        if(!root)
        {
            return {0, INT_MIN, INT_MAX};
        }

        struct data leftTree = solve(root->left);
        struct data rightTree = solve(root->right);
        
        if(leftTree.largest < root->data && root->data < rightTree.lowest)
        {
            return {leftTree.size + rightTree.size + 1, max(root->data, rightTree.largest),
            min(root->data, leftTree.lowest)}; 
        }

        return {max(leftTree.size, rightTree.size), INT_MAX, INT_MIN};
    }
    
    int largestBst(Node *root){
    	struct data ans = solve(root);
    	return ans.size;
    }