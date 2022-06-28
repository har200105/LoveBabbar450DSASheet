vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
       
        vector<int>ans(m+n);
       
        int k=0;
        int i=0,j=0;
       
        while(i<n && j<m){
            
            if(a[i]>b[j]){
                ans[k] = a[i];
                i++;
            }
            else{
                ans[k]=b[j];
                j++;
            }
            k++;
            
        }
        
        while(i<n){
            
            ans[k] =a[i];
            i++;
            k++;
            
        }
        while(j<m){
            
            ans[k] = b[j];
            j++;
            k++;
            
        }
        
        return ans;
        
    }