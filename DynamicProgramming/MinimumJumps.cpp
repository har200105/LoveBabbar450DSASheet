 int minJumps(int arr[], int n){
        
        int maxshift=arr[0];
        int step =  arr[0];
        int jumps=1;
        
        if(n==1){
            return 0;
        }
        
        else if(arr[0]==0){
            return -1;
        }
        
        else{
            for(int i=1;i<n;i++){
                if(i==n-1){
                    return jumps;
                }else{
                    maxshift = max(maxshift,arr[i]+i);
                    step--;
                    if(step==0){
                        jumps++;
                        if(i>=maxshift){
                            return -1;
                        }
                        step=maxshift-i;
                    }
                }
            }
        }
        
    }