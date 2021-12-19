class Solution {
  public:
    int setBits(int N) {
        int ans=0;
        while(N){
            int bit = N & 1;
            if(bit){
                ans++;
            }
            N>>=1;
        }
        return ans;
    }
};