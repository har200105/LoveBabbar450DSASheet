	void shortest_distance(vector<vector<int>>&m){
	      for (int k=0; k<m.size(); k++){
           for (int i=0; i<m.size(); i++){
               for (int j=0; j<m.size(); j++){
                   if (m[i][k]==-1 || m[k][j]==-1){
                       continue;
                   }
                   else if (m[i][j]==-1){
                       m[i][j]=m[i][k]+m[k][j];
                   }
                   else{
                       m[i][j]=min(m[i][j], m[i][k]+m[k][j]);
                   }
               }
           }
       }
	}