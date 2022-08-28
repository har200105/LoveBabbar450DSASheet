class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<pair<int,int>> adj[n];
        for(auto x:flights){
            adj[x[0]].push_back({x[1],x[2]});
        }
        priority_queue< vector<int> ,vector<vector<int>>,greater<vector<int>>> pq;
        vector<int> stops(n,INT_MAX);
        pq.push({0,src,0});
        while(pq.size()!=0){
            vector<int> v=pq.top();
            pq.pop();
            int current_stops=v[2],node=v[1],cost=v[0];
            
            if(node==dst){
                return cost;                               
            }
            
            if(stops[node]<current_stops || current_stops>k)
                continue;
            stops[node]=current_stops;
            for(auto x:adj[node])
            {
                pq.push({cost+x.second,x.first,current_stops+1});
            }
        }
        return -1;
    }
};