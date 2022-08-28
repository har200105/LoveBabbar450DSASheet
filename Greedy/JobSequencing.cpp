struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 



class Solution {
    
    public:
    
    static bool comp(Job j1,Job j2){
        return j1.profit>j2.profit;
    }
    
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        sort(arr,arr+n,comp);
        int maxdead=0;
        for(int i=0;i<n;i++){
            maxdead=max(maxdead,arr[i].dead);
        }
        int cnt=0;
        int totprofit=0;
        vector<int> jobdone(maxdead+1,-1);
        for(int i=0;i<n;i++){
            int id=arr[i].id;
            int dl=arr[i].dead;
            int pf=arr[i].profit;
            for(int j=dl;j>=1;j--){
                if(jobdone[j]==-1){
                    jobdone[j]=id;
                    totprofit+=pf;
                    cnt++;
                    break;
                }
            }
        }
        return {cnt,totprofit};
    } 
        
};