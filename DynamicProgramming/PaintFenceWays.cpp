 long long countWays(int n, int k){
        int e = 1e9 + 7;
        long long int dp[n+1];
        dp[1] = k%e;
        dp[2] = (k*k)%e;
        for(int i =3;i<=n;i++)
        {
            dp[i] = (((k-1)*dp[i-1])%e + (dp[i-2]*(k-1))%e)%e;
        }
        return dp[n];
        
    }