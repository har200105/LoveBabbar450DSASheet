 string rearrangeString(string str){
        
        priority_queue<pair<int ,char>>maxH;
        
        unordered_map<char,int>mp;
        
        string ans;
        
        for(int i=0;i<str.size();i++){
            mp[str[i]]++;
        }
        
        for(auto it:mp){
            maxH.push({it.second,it.first});
        }
        
        while(maxH.size()>1){
            auto it1=maxH.top();
            maxH.pop();
            auto it2=maxH.top();
            maxH.pop();
            ans.push_back(it1.second);
            ans.push_back(it2.second);
            
            if(it1.first-1>0){
                maxH.push({it1.first-1,it1.second});
            }
            
            if(it2.first-1>0){
                maxH.push({it2.first-1,it2.second});
            }
            
        }
        
        if(maxH.size()==1){
            if(maxH.top().first==1){
                ans.push_back(maxH.top().second);
                return ans;
            }
            else{
                return "-1";
        
            }
        }
        
        if(maxH.size()==0){
            return ans;
        }
        
        return "-1";
}