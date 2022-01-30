int celebrity(vector<vector<int> >& M, int n) {
    
       stack<int> s;
       
       for(int i=0;i<n;i++)
       s.push(i);
       
       while(s.size()>1){
           int a=s.top();s.pop();
           int b=s.top();s.pop();
           if(M[a][b]==0)
           s.push(a);
           else
           s.push(b);
       }
       int c=s.top();
       for(int i=0;i<n;i++){
           if(M[c][i]==1)return -1;
           if(c!=i&&(M[i][c]==0))return -1;
       }
       return c;
   }