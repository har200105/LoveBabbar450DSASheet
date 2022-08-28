class Solution {
public:
   
   int dp[501];
   int n;
   int k;
   
   int recur(int i,int j,vector<int>&nums){
       if(i>=n){
           return 0;
       }
       if(dp[i]!=-1)return dp[i];
       int su=0;
       int ans=INT_MAX;
       for(int j=i; j<n;j++){
           su+=nums[j];
           if(k-su<0)break;
           if(j<n-1)
           ans=min(ans,(k-su)*(k-su)+recur(j+1,j-i+1,nums));
           else ans=0+recur(j+1,j-i+1,nums);
           
           su++;
       }
       return dp[i]=ans;
   }
   
   int solveWordWrap(vector<int>nums, int K) {
       
    
       n=nums.size();
       k=K;
       memset(dp,-1,sizeof(dp));
       int ans=recur(0,0,nums);
       return ans;
       
   } 


};