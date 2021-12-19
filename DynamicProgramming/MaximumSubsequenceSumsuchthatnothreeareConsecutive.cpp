
int fun(int n){
	
	if(n==-1){
		return 0;
	}

	if(n==0){
		return a[0];
	}

	if(n==1){
		return a[1] + a[0];
	}

	if(dp[n]!=-1){
		return dp[n];
	}

	return dp[n] = max(max(fun(n-1),a[n]+fun(n-2)),a[n]+a[n-1]+fun(n-3));

}



int main(){

	int n; cin>>n;
	memset(dp,-1,sizeof(dp));
	fun(n-1);
	return 0;
}