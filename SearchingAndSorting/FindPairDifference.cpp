bool findPair(int arr[], int n, int k){
   sort(arr,arr+n);
    int i=0;
    int j=1;
    
    while(i<n&&j<n)
    {
       if(abs(arr[i]-arr[j])<k) j++;
       else if(abs(arr[i]-arr[j])>k) i++;
       else if( i!=j) return 1;
       else j++;
        
    }
    return 0;
   
    
}