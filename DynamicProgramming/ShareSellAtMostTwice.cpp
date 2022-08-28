int maxProfit(vector<int>&price){
      int n=price.size();
   int buy1=INT_MAX;
   int buy2=INT_MAX;
   int profit1=0;
   int profit2=0;
   for(int i=0;i<price.size();i++)
   {
       buy1=min(buy1,price[i]);
       profit1=max(profit1,price[i]-buy1);
      buy2=min(buy2,price[i]-profit1);
      profit2=max(profit2,price[i]-buy2);
   }
    
   return profit2;
}
