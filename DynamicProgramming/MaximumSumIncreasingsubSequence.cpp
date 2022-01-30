int maxSumIS(int arr[], int n)  {

	
	    int dp[n];
	    
	    for(int i=0;i<n;i++){
	        dp[i] = arr[i];
	    }
	    
	    for(int i=0;i<n;i++){
	        for(int j=0;j<i;j++){
	            if(arr[j]<arr[i]){
	                dp[i]  = max(dp[i],arr[i]+dp[j]);
	            }
	        }
	    }
	    
	    int maxi = 0;
	    
	    for(int i=0;i<n;i++){
	        maxi = max(dp[i],maxi);
	    }
	    
	    return maxi;
	    
	    
	    
	}  