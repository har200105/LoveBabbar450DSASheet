class Solution {
public:

    int buyMaximumProducts(int n, int k, int price[]){
       vector<pair<int,int>>arr;
       
       for(int i=0;i<n;i++){
           arr.push_back({price[i],i+1});
       }
       
       sort(arr.begin(),arr.end());
       
       int ans=0;
       
       for(int i=0;i<n;i++){
           if(arr[i].first*arr[i].second<k){
                   ans+=arr[i].second;
                   k-=arr[i].first*arr[i].second;
           }
           else{
               ans+=k/arr[i].first;
               break;
           }
       }
       
       return ans;
    
        
    }
};

