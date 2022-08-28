 int countSquares(int N) {
        int a = sqrt(N);
        if(a*a==N){
            return a-1;
        }
        
        else {
            return a;
        }
    }