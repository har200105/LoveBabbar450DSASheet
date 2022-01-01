vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int>v;
        queue<int>q;
        q.push(0);
        vector<int> vis(V,0);
        vis[0]=1;
        
        while(!q.empty()){
            int t = q.front();
            q.pop();
            v.push_back(t);
            for(auto s : adj[t]){
                if(!vis[s]){
                    vis[s]=1;
                    q.push(s);
                }
            }
        }
        return v;
}