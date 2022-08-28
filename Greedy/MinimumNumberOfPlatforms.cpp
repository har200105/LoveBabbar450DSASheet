int findPlatform(int arr[], int dep[], int n){
        
        sort(arr,arr+n);
        sort(dep,dep+n);
        
        int plat=1,res=1,i=1,j=0;
        
        while(i<n and j<n){
            
            if(arr[i]<=dep[j]){
                plat++;
                i++;
            }
            
            else if(arr[i]>dep[j]){
                plat--;
                j++;
            }
            
            if(plat>res){
                res = plat;
            }
            
        }
        
        return res;
    }