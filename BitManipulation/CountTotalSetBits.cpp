class Solution{
    public:
    
    int max2(int x){
        int p = 0;
        while((1<<p)<=x){
            p++;
        }
        return p-1;
    }
    
    int countSetBits(int n)
    {
        if(n==0) return 0;
        int x = max2(n);
        int ans = x*(1<<(x-1))+(n-(1<<x))+1+countSetBits(n-(1<<x));
        return ans;
    }
};