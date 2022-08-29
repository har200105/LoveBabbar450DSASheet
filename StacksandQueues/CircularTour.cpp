 int tour(petrolPump p[],int n){
        
        int start = 0;
        int req=0;
        int extra=0;
        
        for(int i=0;i<n;i++){
            extra+=(p[i].petrol - p[i].distance);
        if(extra<0){
            start = i+1;
            req += extra;
            extra=0;
        }
    }
        
        if(extra + req >=0){
            return start;
        }
        
        return -1;
    }