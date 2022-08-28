long long int maxSum(int arr[], int n){
    
   sort(arr,arr+n);
    int a=0,b=n-1;
    long long sum=0;
    while(a<b){
        sum+= abs(arr[b]-arr[a]);
        ++a;
        --b;
    }
    return sum*2;
    
}