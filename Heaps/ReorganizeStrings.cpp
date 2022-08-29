 string reorganizeString(string s) {
               
        map<char, int> m;
        int n = s.size();
        
		
        for(int i = 0; i < n; i++){
            
            m[s[i]]++;
        }
        
        priority_queue<pair<int, char>> pq;
        
        for(auto it : m){
            
            pq.push({it.second, it.first});
        }
        
        string res = "";
        while(!pq.empty()){
            
            auto fir = pq.top();
            pq.pop();
            res += fir.second;
            
            if(!pq.empty()){
                
                auto sec = pq.top();
                pq.pop();

                res += sec.second;
                
                if(sec.first-1>0) pq.push({sec.first-1, sec.second});
            }
            
            if(fir.first-1>0) pq.push({fir.first-1, fir.second});
        }
	    
        if(res[n-1]==res[n-2]) {
            return "";
        }
        else return res;
    }