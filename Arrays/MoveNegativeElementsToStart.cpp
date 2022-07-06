
int j=-1;

for(int i=0;i<n;i++){
	if(arr[i]<0){
		j++;
		swap(arr[j],arr[i]);
	}
}