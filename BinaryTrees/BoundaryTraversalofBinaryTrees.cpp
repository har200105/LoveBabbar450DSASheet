class Solution {
public:   
    vector <int> boundary(Node *root)
    {
        if(root == NULL){
            return ;
        }
        vector<int> vt;
        vt.push_back(root->data);
        leftNodes(root->left, vt);
        leafNodes(root, vt);
        rightNodes(root->right, vt);
        return vt;
    }
    
    void leftNodes(Node* root, vector<int> &vt)
    {
        if(root == NULL || (root->left == NULL && root->right == NULL)){
            return;
        }
        if(root->left == NULL && root->right != NULL){
            vt.push_back(root->data);
            leftNodes(root->right, vt);
        }else{
            vt.push_back(root->data);
            leftNodes(root->left, vt);
        }
    }
    
    void leafNodes(Node* root, vector<int> &vt)
    {
        if(root == NULL){
            return;
        }
        if(root->left == NULL && root->right == NULL){
            vt.push_back(root->data);
        }
        leafNodes(root->left, vt);
        leafNodes(root->right, vt);
    }
    
    void rightNodes(Node* root, vector<int> &vt)
    {
        if(root == NULL || (root->left == NULL && root->right == NULL)){
            return;
        }
        if(root->right == NULL && root->left != NULL){
            rightNodes(root->left, vt);
            vt.push_back(root->data);
        }else{
            rightNodes(root->right, vt);
            vt.push_back(root->data);
        }
    }
};