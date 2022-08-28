 bool issafe(vector<vector<int>> &board, int r, int c, int n){
       for (int i=0; i<r; i++){
           if (board[i][c]==1){
               return 0;
           }
       }
       int row=r, col=c;
       while (row>=0 && col>=0){
           if (board[row][col]==1){
               return 0;
           }
           row--;
           col--;
       }
       row=r, col=c;
       while (row>=0 && col<n){
           if (board[row][col]==1){
               return 0;
           }
           row--;
           col++;
       }
       return 1;
   }
   void solve(vector<vector<int>> &board, vector<vector<int>> &ans, int x, int n){
       if (x==n){
           vector<int> v;
           for (int i=0; i<n; i++){
               for (int j=0; j<n; j++){
                   if (board[i][j]==1){
                       v.push_back(j+1);
                   }
               }
           }
           ans.push_back(v);
           return;
       }
       for (int i=0; i<n; i++){
           if (issafe(board, x, i, n)){
               board[x][i]=1;
               solve(board, ans, x+1, n);
               board[x][i]=0;
           }
       }
   }
   
   vector<vector<int>> nQueen(int n) {
       vector<vector<int>> board(n, vector<int>(n, 0));
       vector<vector<int>> ans;
       solve(board, ans, 0, n);
       sort(ans.begin(), ans.end());
       return ans;
   }