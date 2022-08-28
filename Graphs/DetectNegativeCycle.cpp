int isNegativeWeightCycle(int n, vector<vector<int>>edges){
	    
	    vector<int>dis(n,1e9);
	    dis[0]=0;
	    bool f = false;
	    
    for(int i=0;i<n;i++){
        
        for(auto k:edges){
            
            int u = k[0];
            int v = k[1];
            int w = k[2];
            
            if(dis[v]>dis[u]+w){
                
                dis[v]=dis[u]+w;
                if(i==n-1){
                   f=true;
                }
            }
        }
    }
    
    return f;

}