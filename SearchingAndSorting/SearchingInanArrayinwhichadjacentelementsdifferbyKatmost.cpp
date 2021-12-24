void solve(){
	int n;
	cin>>n;
	int ans=-1;
	int i=0;
	while(i<n){
		if(a[i]==x){
			ans=i;
			break;
		}
		i=i+max(1,abs(a[i]-x)/k);
	}

	return ans;

}