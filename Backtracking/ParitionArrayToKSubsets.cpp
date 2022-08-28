bool part(int a[],vector<int>&selected,int k , int n , int subsum , int index,int tempsum){
        
        
        if(k==0){
            return 1;
        }
        
        if(tempsum > subsum){return 0;}
        
        if(tempsum == subsum){
            return part(a,selected,k-1,n,subsum,0,0);
        }
        
        for(int i=0;i<n;i++){
            if(selected[i]) {continue;}
            selected[i] = 1;
            if(part(a,selected,k,n,subsum,i+1,tempsum+a[i])){
            
             return 1;
                
            }
                selected[i] = 0;
        }
        
        return 0;
        
    }
    
    
    bool isKPartitionPossible(int a[], int n, int k){
        
        int total = 0;
        
        for(int i=0;i<n;i++){
            total += a[i];
        }
        
        
        if(total % k !=0 ){
            return 0;
        }
        
        
        if(n<k){return 0;}
        
        int subsum = total / k;
        
        vector<int>selected(n,0);
        
        return part(a,selected,k,n,subsum,0,0);
        
    }