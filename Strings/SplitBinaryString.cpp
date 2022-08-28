 int maxSubStr(string str){
      int n=str.size();
        
        int ans=0;
        
        int zero=0;
        int one=0;
        
        for(int i=0;i<n;i++)
        {
           if(str[i]=='0')
             zero++;
             
           else
             one++;
             
            if(zero==one)
             ans++;
        
        }
        
        if(zero!=one){
            return -1;
        }

        else{
           return ans;
        }

    }