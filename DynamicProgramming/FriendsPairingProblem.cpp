class Solution
{
    long long int m = 1000000007;
public:
    int countFriendsPairings(int n) 
    {
         long long int dp[n+1];
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 2;
        
        for(int i=3;i<n+1;i++)
        {
            dp[i] = dp[i-1]%m + ((i-1)*dp[i-2])%m;
        }
        return dp[n]%m;
    }
};    