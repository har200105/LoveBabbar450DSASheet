 int matrixMultiplication(int n, int arr[]){
       
    int dp[n-1][n-1];
    for(int g = 0; g < n-1; g++)
    {
       for(int i=0, j = g; j<n-1; i++, j++)
       {
           if(g == 0)
           dp[i][j] = 0;
           else if(g == 1)
           dp[i][j] = arr[i]*arr[j]*arr[j+1];
           else
           {
             int mincost = INT_MAX;
             for(int k = i; k<j; k++)
             {
                 int lc = dp[i][k];
                 int rc = dp[k+1][j];
                 int mc = arr[i]*arr[k+1]*arr[j+1];
                 int tc = lc + rc + mc;
                 mincost = min(tc, mincost);
             } 
             dp[i][j] = mincost; 
           }
       }
    }
    return dp[0][n-2];
}