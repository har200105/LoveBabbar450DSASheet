int transfigure (string A, string B){
        
        if(A.length()!=B.length()){
            return -1;
        }
        
        unordered_map<char,int>mp;
        
        for(int i=0;i<A.length();i++){
            mp[A[i]]++;
            mp[B[i]]--;
        }
    
    
        for(auto it:mp){
            if(it.second!=0){
                return -1;
            }
        }
    
        int res=0;
        
        int p1=A.length()-1;
        int p2=B.length()-1;
        
        while(p1>=0){
        
        if(A[p1]!=B[p2]){
            res++;
        }
        else{
             p2--;
        }
        
            p1--;
        }
        
        return res;


    }