class Solution{
    public:
    long long int maximizeSum(long long int a[], int n, int k){
        sort(a,a+n);
        long long int sum = 0;
        for(int i=0;i<n;i++){
            if(a[i]<0 && k>0){
                a[i]=-a[i];
                k--;
            }
        }
        
        for(int i=0;i<n;i++){
            sum+=a[i];
        }
        
        int x = *min_element(a,a+n);
        
        if(k&1){
            sum-=2*x;
        }
        
        
        return sum;
        
    }
};