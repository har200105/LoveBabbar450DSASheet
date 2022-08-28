   int dp[1001][1001];
int solve(vector<vector<int>>&m,int i,int j ){
    
    if(i<0 or j<0 or i>m.size()-1 or j>m[0].size()-1)
    {
        return 0;
    }
    if(dp[i][j]!=-1)
    {
        return dp[i][j];
    }
    int a=solve(m,i-1,j);
    int b=solve(m,i-1,j-1);
    int c=solve(m,i-1,j+1);
    dp[i][j]=m[i][j]+max({a,b,c});
    return dp[i][j];
}
    int maximumPath(int n, vector<vector<int>> m)
    {
        // code here
        memset(dp,-1,sizeof(dp));
        int ans=INT_MIN;
            for(int j=0;j<m[0].size();j++)
            {
                ans=max(ans,solve(m,m.size()-1,j));
            }
        return ans;
    }