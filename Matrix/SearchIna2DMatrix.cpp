 bool searchMatrix(vector<vector<int>>& matrix, int x) {
         int n = matrix.size(),m=matrix[0].size();
        int i=0,j=m-1;
        
        while(i<n and j>=0){
            
            if(x == matrix[i][j]){
                return true;
            }
            
            else if(x>matrix[i][j]){
                i++;
            }
            
            else{
                j--;
            }
            
            
        }
        
        return false; 
        
    }