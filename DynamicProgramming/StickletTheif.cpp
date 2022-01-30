    int dp[10001];
    
    int solve(int arr[], int n){
         if(n<=-1){
            return 0;
        }
        
        if(dp[n]!=-1){
            return dp[n];
        }
        
        int x = arr[n] + FindMaxSum(arr,n-2);
        int y = FindMaxSum(arr,n-1);
        
        return dp[n] = max(x,y);
    }
    
    int FindMaxSum(int arr[], int n){
        
        memset(dp,-1,sizeof(dp));
        solve(arr,n-1);
        
    }


//        int FindMaxSum(int arr[], int n){
//     int sum1 = arr[0];
//     int sum2 = 0;
//     int result;
//     for (int i = 1; i < n; i++){
//         result = (sum1 > sum2) ? sum1 : sum2;
//         sum1 = sum2 + arr[i];
//         sum2 = result;
//     }
//     return ((sum1 > sum2) ? sum1 : sum2);
// }
  