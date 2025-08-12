class Solution {
  public:
    vector<int> minMaxCandy(vector<int>& prices, int k) {
        int n= prices.size();
         sort(prices.begin(),prices.end());
        int i=0;
        int j =n-1;
        
        int mini = 0;
        int maxi = 0;
        
        while (i<=j){
             
              mini+=prices[i];
              j-=k;
              i++;
              
        }
        
        i=0;
        j=n-1;
        while (i<=j){
             
              maxi+=prices[j];
              j--;
              i+=k;
              
        }
        
        
        return {mini,maxi};
         
        
    }
};