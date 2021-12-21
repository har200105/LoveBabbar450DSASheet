int solve(){

int mi= INT_MAX;
int i=0,j=0;
int s = 0; 

while(i<=j and j<=n){
	
	while(s<=x and j<n){
		s+=a[j++];
	}

	while(s>x and i<j){
		mi=min(mi,j-i);
		s-=a[i];
		i++;
	}

	return mi;
}

}