    int KthSmallestElement(Node *root, int k) {
        stack<Node*> st; 
        Node* node = root;
        int cnt = 0; 
        while(true) {
            if(node != NULL) {
                st.push(node); 
                node = node->left; 
            }
            else {
    
                if(st.empty() == true) break; 
                node = st.top(); 
                st.pop(); 
                cnt++; 
                if(cnt == k) return node->data; 
                node = node->right; 
            }  
        }
        return -1;
    }