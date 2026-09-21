class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int n = prices.size();
        // int miniPr = prices[0];
        // int maxProfit = 0;

        // for(int i=0; i<n; i++){
        //     int cost = prices[i] - miniPr;
        //     maxProfit = max(maxProfit, cost);
        //     miniPr = min(miniPr , prices[i]);
        // }
        // return maxProfit;


        int n = prices.size();
        int buyPrices = INT_MAX;
        int maxProfit = 0;

        for(int i=0; i < n; i++){
            if(buyPrices < prices[i]){
                int profit = prices[i] - buyPrices;
                maxProfit = max(maxProfit, profit);
            }
            else{
                buyPrices = prices[i];
            }
        }
        return maxProfit;
    }
};