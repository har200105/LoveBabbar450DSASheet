long long minCost(long long arr[], long long n) {
        
        if(n==1){
            return 0;
        }
        
        priority_queue<long long,vector<long long>,greater<long long>> pq;
        
        for(int i=0;i<n;i++){
            pq.push(arr[i]);
        }
        
        long long ans = 0;
        
        while(pq.size()>1){
            
            long long x = pq.top();
            pq.pop();
            
            long long y = pq.top();
            pq.pop();
            
            ans+=(x+y);
            
            pq.push(x+y);
            
        }
        
        return ans;
        
    }