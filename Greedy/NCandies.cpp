   vector<int> candyStore(int candies[], int N, int K){
        
        sort(candies,candies+N);
        
        int maxi=0;
        int mini=0;
        
        int i=0;
        int j=N-1;
        
        while(i<=j){
            mini+=candies[i];
            i++;
            j=j-K;
        }
        
        reverse(candies,candies+N);
        
        i=0;
        j=N-1;
        
        
        while(i<=j){
            maxi+=candies[i];
            i++;
            j=j-K;
            
        }
        return {mini,maxi};
    }