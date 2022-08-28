int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
    	
    	int row=-1;
        int i=0;
        int j= m-1;
        
        while(i<n && j>=0){
            
            if(arr[i][j]  == 1){
                row=i;
                j--;
            }
            else{
                i++;
            }
        }
        
        
        return row;
	}