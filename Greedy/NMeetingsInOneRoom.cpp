
static bool compare(pair<int,int> p1,pair<int,int> p2){
        return p1.second < p2.second;
    }
    
    int maxMeetings(int start[], int end[], int n){
        
        vector<pair<int,int>> v;
        
        for(int i=0;i<n;i++){
            v.push_back({start[i],end[i]});
        }
        
        sort(v.begin(),v.end(),compare);
        
        int ans=1;
        
        int ansEnd = v[0].second;
        
        for(int i=1;i<n;i++){
            if(v[i].first > ansEnd){
                ans++;
                ansEnd = v[i].second;
            }
        }
        
        return ans;
    }