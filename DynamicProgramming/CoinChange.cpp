  long long int count(int S[], int m, int n) {

        vector<long long int> dp(n+1, 0);
        dp[0] = 1;
        for(int i=0; i<m; i++){
            int j=S[i];
            while(j<=n){
                dp[j] += dp[j-S[i]];
                j++;
            }
        }
        return dp[n];
    }