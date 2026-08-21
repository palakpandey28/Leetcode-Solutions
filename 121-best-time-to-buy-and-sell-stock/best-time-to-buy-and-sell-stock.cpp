class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int n = prices.size();
    int buy = 0;
    int profit = 0;
    
    for(int i = 0;i<n;i++){
        if(prices[i]<prices[buy]){
            buy =i;
        }
       
            int max_sub = prices[i]-prices[buy];
            profit = max(max_sub,profit);
           
        
       
    }
   
    return profit;
    }
};