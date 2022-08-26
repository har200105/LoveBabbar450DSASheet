class TreeAncestor {
public:
    vector<vector<int>> ans;
    
    TreeAncestor(int n, vector<int>& parent) 
    {
        int k = ceil(log2(n));
        ans.push_back(parent);
        
        int l=0;
        while(k--)
        {
            vector<int> next(n,0);
            vector<int> prev = ans[l];
            
            for(int j=0;j<n;j++)
            {
                int ns = prev[j];
                if(ns==-1) next[j]=-1;
                else next[j]=prev[ns];
            }

            ans.push_back(next);
            l++;
        }
    }
    
    int getKthAncestor(int node, int k) 
    {
        int f = floor(log2(k));
        int d = pow(2,f);
        
        int diff = k-d;
        if(ans[f][node]==-1) return -1;
        
        if(diff==0)
            return ans[f][node];
        else
            return getKthAncestor(ans[f][node],diff);  
    }
};