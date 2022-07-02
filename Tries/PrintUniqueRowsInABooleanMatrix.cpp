class TrieNode {
public:

    TrieNode* links[2];
    TrieNode(){
        this->links[0] = this->links[1] = NULL;
    }
};

vector<vector<int>> res;

class Trie {
    public:
  
    TrieNode* root;
    
    Trie(){
        this->root = new TrieNode();
    }
    
    void add(vector<int> & row){
        TrieNode* temp = root;
        bool isPresent = true;
        
        for(int i = 0; i < row.size(); ++i){
            
            if(temp->links[row[i]] == NULL){
                temp->links[row[i]] = new TrieNode();
                isPresent = false;
            }
       
            temp = temp->links[row[i]];
       
        }
        
        if(!isPresent){
            res.push_back(row);
        }
    }
};


vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col){
    
    res.clear();
    Trie* trie = new Trie();
    
    for(int i = 0; i < row; ++i){
        vector<int> R;
        for(int j = 0; j < col; ++j){
            R.push_back(M[i][j]);
        }
        trie->add(R);
    }
    
    return res;
}