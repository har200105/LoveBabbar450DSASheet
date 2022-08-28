int median(vector<vector<int>> &matrix, int r, int c){
       priority_queue<pair<int, pair<int, int>> , vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>>pq;
       for(int i=0; i<r; i++){
           pq.push({matrix[i][0], {i, 0}});
       }
       int sum = r*c;
       int total = 0;
       while(!pq.empty()){
           int value = pq.top().first;
           int row = pq.top().second.first;
           int col = pq.top().second.second;
           pq.pop();
           if(total == (sum/2)){
               return value;
           }
            total++;
           if(col < c-1){
               pq.push({matrix[row][col+1], {row, col+1}});
           }
       }
       return -1;
   }