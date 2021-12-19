class Solution {
  public:
    int findPosition(int N) {
        if(N==0){
            return -1;
        }
        if((N&(N-1))==0){
            int ans=0;
            while(N){
                ans++;
                N>>=1;
            }
            return ans;
        }
        return -1;
    }
};