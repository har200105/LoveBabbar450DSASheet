ll findSubarray(vector<ll> a, int n ) {
       
       int ans=0,sum=0;
       
       unordered_map<int,int> mpp;
       
       mpp[0]++;
    
        for(int i=0;i<n;i++){
            
            sum+=a[i];
            
                ans+=mpp[sum];
                mpp[sum]++;
 
            
        }
        
        return ans;
    }