unordered_map<string,int>m;

string solve(Node* root){
    if(!root){
        return "$";
    }
    string s ="";
    
    if(!root->right and !root->left){
        s=to_string(root->data);
        return s;
    }
    
    s =  s + to_string(root->data);
    s =  s + solve(root->left);
    s =  s + solve(root->right);
    
    m[s]++;
    
    return s;
    
}


vector<Node*> printAllDups(Node* root){
    
    m.clear();
    solve(root);
    for(auto x:m){
        if(x.second>=2){
            return true;
        }
            return false;
    }
     return false;
    
}