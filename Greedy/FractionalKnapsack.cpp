class Solution
{
    public:
    
    static bool comp(Item a , Item b){
        
        double r1 = (double)a.value / (double)a.weight;
        double r2 = (double)b.value / (double)b.weight;
        
        return r1>r2;
        
    }
    
    double fractionalKnapsack(int W, Item arr[], int n){
        
        sort(arr,arr+n,comp);
        
        int curr = 0;
        double final = 0.0;
        
        for(int i=0;i<n;i++){
            
            if(curr + arr[i].weight <=W){
                curr += arr[i].weight;
                final += arr[i].value;
            }
            
            else{
                int remain = W - curr;
                final += (arr[i].value / (double)arr[i].weight) * (double)remain;
                break;
            }
            
        }
        
        return final;
        
    }
        
};
