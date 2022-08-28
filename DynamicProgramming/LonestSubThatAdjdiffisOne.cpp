int longestSubsequence(int N, int A[]){
           vector<long> dp(N+1,1); 
        
        for(int i=1;i<N;i++){
            for(int j=0;j<i;j++){
                if(A[i]==A[j]+1 or A[i]==A[j]-1)
                    dp[i]=max(dp[i],dp[j]+1);
            }
        }
        int res = 1;
        for(int i=0;i<N;i++){
            if(dp[i]>res){
                res=dp[i];
            }
        }
        return res;
    }