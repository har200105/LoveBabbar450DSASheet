int minValue(Node* root) {
    if(root->left){
        return minValue(root->left);
    }else{
        return root->data;
    }
}


#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left child
and a pointer to right child */
struct node {
    int data;
    struct node* left;
    struct node* right;
};

// Function to create a new node
struct node* newNode(int data)
{
    struct node* newnode = new node();
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;

    return (newnode);
}

// Function to insert a new node in BST
struct node* insert(struct node* node, int data)
{
    /* 1. If the tree is empty, return a new,   
    single node */
    if (node == NULL)
        return (newNode(data));
    else {
        /* 2. Otherwise, recur down the tree */
        if (data <= node->data)
            node->left = insert(node->left, data);
        else
            node->right = insert(node->right, data);

        /* return the (unchanged) node pointer */
        return node;
    }
}

// Function to find the node with maximum value
// i.e. rightmost leaf node
int maxValue(struct node* node)
{
    /* loop down to find the rightmost leaf */
    struct node* current = node;
    while (current->right != NULL)
        current = current->right;
    
    return (current->data);
}

// Driver code
int main()
{
    struct node* root = NULL;
    root = insert(root, 4);
    insert(root, 2);
    insert(root, 1);
    insert(root, 3);
    insert(root, 6);
    insert(root, 5);

    cout << "Maximum value in BST is " << maxValue(root);

    return 0;
}
