int kthLargest(vector<int> &Arr,int N,int k){
        
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<N;i++){
            int sum=0;
            for(int j=i;j<N;j++){
                sum+=Arr[j];
                if(pq.size()<k){
                    pq.push(sum);
                }else if(pq.top()<sum){
                    pq.pop();
                    pq.push(sum);
                }
            }
        }
        
        
        return pq.top();
    }