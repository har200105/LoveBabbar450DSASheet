   int dp[1001][1001];
    
    int solve(int n, int a[],int s){
        
        if(n==-1){
            if(s==0){
                return 1;
            }
            return 0;
        }
        
        if(s<0){
            return 0;
        }
        
        if(s==0){
            return 1;
        }
        
        if(dp[n][s]!=-1){
            return dp[n][s];
        }
        
        return dp[n][s] = solve(n-1,a,s-a[n]) || solve(n-1,a,s);
        
    }
    
    
    int equalPartition(int N, int arr[]){
        
        int s=0;
        
        for(int i=0;i<N;i++){
            s+=arr[i];
        }
        
        if(s%2==1){
            return 0;
        }
        
        s=s/2;
        
        dp[N][s];
        
        memset(dp,-1,sizeof(dp));
        
        return solve(N-1,arr,s);
        

    }