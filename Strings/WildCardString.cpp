    int dp[1001][1001];
   
   int matchingString(string p,string s,int i,int j){
       
       if(i == -1 && j == -1){
           return 1;
       }
       
       if(j == -1){
           for(int k = 0;k<i;i++){    
               if(p[i] != '*'){ 
                  return 0;
                }  
           }
           return 1;  
       }
       if(i == -1){  
           return 0;
       }
       if(dp[i][j] != -1){
           return dp[i][j];
       }
       if(p[i] == s[j] || p[i] == '?'){
           return dp[i][j] = matchingString(p,s,i-1,j-1);
       }
       if(p[i] == '*'){
           int op1 = matchingString(p,s,i-1,j);  
           int op2 = matchingString(p,s,i,j-1);   
           return dp[i][j] = op1 or op2;
       }
       return dp[i][j] = 0;
   }
   
   bool match(string p, string s)
   {
        memset(dp,-1,sizeof(dp));
        
        int i = p.size()-1;
        int j = s.size()-1;
        int x = matchingString(p,s,i,j);
        if(x == 1){
            return true;
        }else{
            return false;
        }
   }