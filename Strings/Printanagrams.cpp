 vector<vector<string> > Anagrams(vector<string>& v) {
        map<string,vector<string>>m;
        for(int i=0;i<v.size();i++){
            string s = v[i];
            sort(s.begin(),s.end());
            m[s].push_back(v[i]);
        }
    
    vector<vector<string>> ans(m.size());
    
    int id=0;
    
    for(auto x : m){
        
        auto v = x.second;
        for(int i=0;i<v.size();i++){
            ans[id].push_back(v[i]);
        }
        id++;
        
     
    }
       return ans;
}