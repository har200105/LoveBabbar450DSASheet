class Solution {
public:
    int maxProfit(vector<int>& prices) {
       
        int curr_price=INT_MAX;
        int profit=0;
        for(int i=0;i<prices.size();i++){
            
            if(prices[i]<curr_price){
                curr_price=prices[i];
            }
            
            else if(prices[i]-curr_price>profit){
                profit = prices[i]-curr_price;
            }
            
        }
        
        return profit;
    }
};