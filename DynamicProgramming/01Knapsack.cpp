class Solution
{
    public:
    int dp[1001][1001];
    
    int solve(int wt[],int val[],int w ,int n){
        if(w==0 || n==-1){
            return 0;
        }
        
        if(dp[n][w]!=-1){
            return dp[n][w];
        }
        
        if(wt[n]>w){
            return dp[n][w] = solve(wt,val,w,n-1);
        }
        
        int a,b;
        a=val[n]+solve(wt,val,w-wt[n],n-1);
        b=solve(wt,val,w,n-1);
        return dp[n][w] = max(a,b);
    }
    
    int knapSack(int W, int wt[], int val[], int n) 
    { 
        dp[n][W];
        memset(dp,-1,sizeof(dp));
        return solve(wt,val,W,n-1);
    }
};