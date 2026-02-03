class Solution {
  public:
    int maxProfit(vector<int> &prices) {
        // code here
        int buy = prices[0];
        int ans =0;
        
        for(int i:prices){
              ans = max(ans , i-buy);
              buy = min(buy, i);
              
              
        }
        
        return ans;
    }
};
