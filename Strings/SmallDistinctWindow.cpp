 int findSubString(string str){
        
        unordered_map<char,int> req;
        
        for(auto c:str){
          req[c]=1;   
        }
        
        int start=0; 
        int end=0;
        int ans=INT_MAX;
        int target=req.size();
        int count=0;
        
        while(end<str.length()){
            
            if(req[str[end]]>0){
                count++;
            }
            
            req[str[end]]--;
            
            if(count==target){
                
                while(start<=end and req[str[start]]<0){
                     req[str[start]]++;
                     start++;
                }
                
                ans=min(ans,end-start+1);
            }
            end++;
        }
        
        return ans;

    }