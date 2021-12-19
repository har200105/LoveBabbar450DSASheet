class Solution{
    public:
    int countBitsFlip(int a, int b){
        
        int x = a^b;
        int ans=0;
        while(x){
            if(x&1) 
            {
                ans++; x=x>>1;
            }
        }
        
        return ans;
        
    }
};