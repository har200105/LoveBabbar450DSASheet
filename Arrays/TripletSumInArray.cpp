 bool find3Numbers(int arr[], int n, int X){
        sort(arr,arr+n);
        int ans=0;
        for(int i=0;i<n-2;i++){
        int l=i+1;
        int r=n-1;
        while(l<r){     
            if(arr[i]+arr[l]+arr[r]==X){
                ans=1;
                break;
            }else if(arr[i]+arr[l]+arr[r]<X){
                l++;
            }else{
                r--;
            }
        }
    }
        
        return ans;
        
}