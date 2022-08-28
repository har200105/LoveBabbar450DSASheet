class Solution{
    public:
    int Maximize(int a[],int n)
    {
        int m=1e9+7;
        sort(a,a+n);
        long long int ans=0;
        for(long long int i=0;i<n;i++){
            ans=((ans%m)+(a[i]*i)%m)%m;
        }
        return ans;
    }
};