long long dp[1001][1001];


long long solve(int i , int j , int a[]){
	if(i==j){
		return a[i];
	}

	if(i>j){
		return 0;
	}

	if(dp[i][j]!=-1){
		return dp[i][j];
	}

	int l = a[i] + min(solve(i+2,j,a),solve(i+1,j-1,a));

	int r = a[j] + min(solve(i+1,j-1,a),solve(i,j-2,a));

	return dp[i][j]=max(l,r);



}

long long maximumAmount(int arr[], int n) 
{
    memset(dp,-1,sizeof(dp));

    long long ans = solve(0,n-1,arr); 
    
    return ans;
}
