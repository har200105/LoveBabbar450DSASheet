    int minimumDays(int S, int N, int M){
        
        int x = S/7;
        int y = S-x;
        int total = S*M;
        int days =(total/N);
        
        if(total%N){
            days++;
        }
        
        if(days<=y){
            return days;
        }
        
        return -1;
        
    }