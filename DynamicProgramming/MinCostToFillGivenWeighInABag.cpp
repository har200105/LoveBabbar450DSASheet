int dp[1001][1001];
	
	int func(int a[],int n ,int w){
	    
	    if(n==-1 and w==0){
	        return 0;
	    }
	    
	    if(n==-1){
	        return 1e9;
	    }
	    
	    if(w==0){
	        return 0;
	    }
	    
	    if(dp[n][w]!=-1){
	        return dp[n][w];
	    }
	    
	    if((n+1)>w or a[n]==-1){
	        return dp[n][w] = func(a,n-1,w);
	    }
	    
	    int x = func(a,n-1,w);
	    int y = a[n]+func(a,n,w-(n+1));
	    
	    return dp[n][w] = min(x,y);
	}
	
	int minimumCost(int a[], int n, int w) {
	    
	    memset(dp,-1,sizeof(dp));
	    
	    int x = func(a,n-1,w);
	    
	    if(x>=1e9){
	        return -1;
	    }
	    
	    return x;
	    
	    
	} 