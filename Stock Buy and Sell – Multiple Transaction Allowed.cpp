 int maximumProfit(vector<int> &prices) {
        // code here
           int currDiff = 0;
        for(int i = 1 ;i< prices.size();i++)
        {
            if(prices[i] > prices[i-1])
            {
                currDiff += prices[i]-prices[i-1];
            }
        }
        return currDiff;
    }
