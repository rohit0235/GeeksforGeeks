class Solution {
  public:
  
  
 
   bool valid(string s) {

       stack<char>p;
       p.push('1');
        int n =s.size();
      for (int i=0;i<n;i++){

           char tops=p.top();
   
           if (tops=='(' && s[i]==')' ){
                p.pop();   
           }
       
           else{
                p.push(s[i]);
           }
           
      }

      return p.top()=='1';
   }
   int ans =0;
    void solve(int n,string& s){
          
           if(s.size()==n){
            //   cout<<s<<" ";
                 
                if(valid(s)){
                     ans++;
                }
                return ;
                 
           }
           
          solve(n,s+="(");
           s.pop_back();
          solve(n,s+=")");
          s.pop_back();
           
          
    }
    
    int findWays(int n) {
        // 1 2 5 14 42 132
        if(n%2==1) return 0;
     int pairs = n / 2;
    vector<vector<int>> dp(pairs + 1, vector<int>(pairs + 1, 0));
    
    // Base case: when no opening brackets left
    for (int close = 0; close <= pairs; close++) {
        dp[0][close] = 1;
    }
    
    // Fill the DP table
    for (int open = 1; open <= pairs; open++) {
        
        // valid only if closes left ≥ opens left
        for (int close = open; close <= pairs; close++) {  
            dp[open][close] = dp[open-1][close] + dp[open][close-1];
        }
    }
    
    return dp[pairs][pairs];
    }
};