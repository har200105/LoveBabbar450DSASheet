class Solution{
public:
    priority_queue<int> maxHeap; 
    priority_queue<int, vector<int>, greater<int>> minHeap;
   
    void insertHeap(int &x){

        if(maxHeap.size() == 0 || maxHeap.top() >= x){
            maxHeap.push(x);
        }
        else{
            minHeap.push(x);
        }
            
        balanceHeaps();
        
    }
    
    void balanceHeaps()
    {
         if(maxHeap.size() > minHeap.size() + 1){
            minHeap.push(maxHeap.top());
            maxHeap.pop();
        }
        
        else if(minHeap.size() > maxHeap.size()){
            maxHeap.push(minHeap.top());
            minHeap.pop();
        }
        
        
    }
    
    double getMedian()
    {
        
           if(maxHeap.size() == minHeap.size()){
            return ((double)maxHeap.top() + (double)minHeap.top()) / 2.0;
        }
        return (double)maxHeap.top();
    }


};