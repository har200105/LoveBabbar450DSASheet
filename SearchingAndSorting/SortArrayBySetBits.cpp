static bool cmp(pair<int,pair<int,int>> &a, pair<int,pair<int,int>> &b){
        if(a.first == b.first){
            return a.second.first>b.second.first;
        }
        return a.first<b.first;
    }
    void sortBySetBitCount(int a[], int n)
    {
        vector<pair<int,pair<int,int>>> v(n);
        for(int i=0 ; i<n ; i++){
            v[i].second.second = a[i]; 
            v[i].first = __builtin_popcount(a[i]);
            v[i].second.first = i;
        }
        sort(rbegin(v),rend(v),cmp);
        for(int i=0 ; i<n ; i++){
            a[i] = v[i].second.second;
        }
    }
    
     int csb(int n){
       int c=0;
       while(n!=0){
           int rsbm=n&-n;
           n-=rsbm;
           c++;
       }
       return c;
   }