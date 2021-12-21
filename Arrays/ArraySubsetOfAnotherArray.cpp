string isSubset(int a1[], int a2[], int n, int m) {
    map<int,int>mp;
    
    for(int i=0;i<n;i++){
        mp[a1[i]]++;
    }
    
    int ans=0;
    
    for(int i=0;i<m;i++){
        if(mp[a2[i]]){
            ans++;
        }
    }
    
    if(ans==m){
        return "Yes";
    }else{
        return "No";
    }
}