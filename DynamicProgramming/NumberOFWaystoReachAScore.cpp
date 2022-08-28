int dp[1001][3];
int solve(int n,vector<int>&a,int i){
    if(n==0)return 1;
    
    if(i==3||n<0)return 0;
    
    if(dp[n][i]!=-1)return dp[n][i];
    return dp[n][i]=solve(n-a[i],a,i)+solve(n,a,i+1); 
}
long long int count(long long int n)
{
     vector<int>a(3);
     a[0]=3;
     a[1]=5;
     a[2]=10;
    memset(dp,-1,sizeof(dp));
     
     return solve(n,a,0);
}