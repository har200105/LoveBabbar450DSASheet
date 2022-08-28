 int solve(int i,int j , vector<vector<int>>&mat,vector<vector<int>>&dp){
   if(i >= mat.size() || j >= mat[0].size()) return 0;
   if(mat[i][j] == 0 ) return 0;
   if(dp[i][j] != -1) return dp[i][j];
   int x = solve(i,j+1,mat,dp);
   int y = solve(i+1,j+1,mat,dp);
   int z = solve(i+1,j,mat,dp);
   return dp[i][j] = 1+min({x,y,z});
}
   int maxSquare(int n, int m, vector<vector<int>> mat){
       vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
       int ans=0;
       for(int i=0;i<n;i++){
           for(int j=0;j<m;j++){
               if(mat[i][j]==1){
                   ans = max(ans,solve(i,j,mat,dp));
               }
           }
       }
           return ans;
   }