void rotate(int arr[], int n){
     for(int i = n-1; i>0; i--){
       swap(arr[i],arr[i-1]);
     }
    
}