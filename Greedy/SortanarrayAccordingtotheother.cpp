 vector<int> sortA1ByA2(vector<int> arr, int n, vector<int> brr, int m) {
        
        map<int,int> mp;
        
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        
        vector<int> ans;
        
        for(int i=0;i<m;i++){
            if(mp.count(brr[i])){
                int freq = mp[brr[i]];
                for(int j=0;j<freq;j++){
                    ans.push_back(brr[i]);
                }
                mp[brr[i]] = 0;
            }
        }
        
        for(auto it:mp){
            if(it.second != 0){
                for(int j=0;j<it.second;j++){
                    ans.push_back(it.first);
                }
            }
        }
        
        return ans;
       
    } 