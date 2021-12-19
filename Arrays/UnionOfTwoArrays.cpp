  int doUnion(int a[], int n, int b[], int m)  {
        
        map<int,int>mpp;
        
        for(int i=0;i<n;i++){
            mpp[a[i]]++;
        }
        
        for(int i=0;i<m;i++){
            mpp[b[i]]++;
        }
        
        return mpp.size();
        
        
        
}