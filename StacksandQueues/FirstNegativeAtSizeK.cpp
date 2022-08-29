vector<long long> printFirstNegativeInteger(
    long long int A[],long long int N, long long int K) {
        
    vector<long long>ans;
    queue<long long>q;
    
    for(int i=0;i<k-1;i++){
        if(A[i]<0){
            q.push(A[i]);
        }
    }
    
    for(int i=k-1;i<N;i++){
        
        if(A[i]<0){
            q.push(A[i]);
        }
        
        if(!q.empty()){
            ans.push_back(q.front());

        
        if(q.front() == A[i-k+1]){
            q.pop();
        }
        
        }
        
        else{
            ans.push_back(0);
        }
    
                                                 
    }