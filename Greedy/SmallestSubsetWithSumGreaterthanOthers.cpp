int minSubset(vector<int> &arr,int n){
        
       long long int restSum = 0;
          for(int i=0;i<n;i++){
          restSum += arr[i];
      }
       sort(arr.begin(),arr.end());
       int size = 0;
       long long int sum = 0;
       
       for(int i=n-1;i>=0;i--){
           sum += arr[i];
           restSum -= arr[i];
           size++;
           if(sum > restSum ){
               break;
           }
       }
       
       return size;
       
       
}