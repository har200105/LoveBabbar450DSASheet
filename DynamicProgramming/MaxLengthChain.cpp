int maxChainLen(struct val p[],int n){
    int dp[n];
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        v.push_back({p[i].first,p[i].second});
    }
    
    sort(v.begin(),v.end());
    
    for(int i=0;i<n;i++){
        dp[i]=1;
    }
    
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(v[j].second<v[i].first){
                dp[i] = max(dp[i],dp[j]+1);
            }
        }
    }
    
    int maxi = 0;
    for(int i=0;i<n;i++){
        maxi=max(maxi,dp[i]);
    }
    
    return maxi;
    
    
}